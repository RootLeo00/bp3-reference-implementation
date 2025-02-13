import os
import yaml
from jinja2 import Environment, FileSystemLoader, BaseLoader
import ipaddr
    
def to_yaml(data):
    return yaml.safe_dump(data).strip()

def createFile(content, filename):
  with open(filename, mode="w", encoding="utf-8") as file:
    file.write(content)
###########

def genIPs(gcn):
  net = ipaddr.IPNetwork(gcn['multus']['network'])
  base_ip = net.ip + 2
  hostInterface = gcn['multus']['hostInterface']

  ips = {
    "amf": {
      "n2": {'ip': str(base_ip), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "smf": {
      "n4": {'ip': str(base_ip + 1), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "upf": {
      "n3": {'ip': str(base_ip + 2), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n4": {'ip': str(base_ip + 3), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n6": {'ip': str(base_ip + 4), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "gnb": {
      "n2": {'ip': str(base_ip + 5), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n3": {'ip': str(base_ip + 6), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
    },
    "du": {
      "f1": {'ip': str(base_ip + 7), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "cu": {
      "f1": {'ip': str(base_ip + 8), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n2": {'ip': str(base_ip + 9), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n3": {'ip': str(base_ip + 10), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "cucp": {
      "e1": {'ip': str(base_ip + 11), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n2": {'ip': str(base_ip + 12), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "f1": {'ip': str(base_ip + 13), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "cuup": {
      "e1": {'ip': str(base_ip + 14), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "n3": {'ip': str(base_ip + 15), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface},
      "f1": {'ip': str(base_ip + 16), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface}
    },
    "trafficserver": {
      'ip': str(base_ip + 17), 'prefixlen': net.prefixlen, 'hostInterface': hostInterface
    },
    "nrf": {
      "loadBalancerIP": gcn['core']['nrfLoadBalancerIP']
    },
  }
  return ips

def plmnSupportList(gcn):
  slices = gcn['slices']
  plnms: []

  nssais = []
  for _slice in slices:
    nssais.append(_slice['snssai'])

  return [
    {
      'mcc': gcn['mcc'],
      'mnc': gcn['mnc'],
      'tac': gcn['tac'],
      'nssai': nssais
      }
    ]

def smfInfo(gcn):
  slices = gcn['slices']

  items = list()
  for _slice in slices:
    item = {
      'sNssai': _slice['snssai'],
      'dnnSmfInfoList': []
      }
    for dnn in _slice['dnns']:
      item['dnnSmfInfoList'].append({'dnn': dnn})
    items.append(item)
  return {'sNssaiSmfInfoList': items}

def servedGuamiList(gcn):
  return [
    {
      'mcc': gcn['mcc'],
      'mnc': gcn['mnc'],
      'amf_region_id': '01',
      'amf_set_id': '001',
      'amf_pointer': '01'
      }
      ]


def readFile(path):
  with open(path, "r") as file:
    content = file.read()
  return content

def render(templatepath, gcn):
  template = environment.get_template(templatepath)

  slices = gcn['slices']
  dnns    = gcn['dnns']

  smf_info = smfInfo(gcn)
  plmn_support_list = plmnSupportList(gcn)
  served_guami_list = servedGuamiList(gcn)

  content = template.render(
      mcc     = gcn['mcc'],
      mnc     = gcn['mnc'],
      tac     = gcn['tac'],
      slices  = slices,
      dnns    = dnns,
      smf_info = smf_info,
      plmn_support_list = plmn_support_list,
      served_guami_list = served_guami_list,
      network = gcn['multus'],
      core = gcn
  )

  return content

# ==============================================================================
# load configurations
with open('roles/5g/base/templates/manifest.yaml', "r") as file:
  tpls = yaml.safe_load(file)

core = yaml.safe_load(os.environ['params_5g'])
gcn = core['GCN']

# Prepare rendering environment
environment = Environment(loader=FileSystemLoader(tpls["output_dir"]))
environment.filters.update({'to_yaml': to_yaml})

if 'multus' in gcn:
  if "ips" not in gcn['multus']:
    gcn['multus']['ips'] = genIPs(gcn)

# Render files
for item in tpls["templates"]:
  path = item['template']
  torender = True if 'render' not in item.keys() else item['render']

  if torender:
    content = render(path, gcn)
  else:
    content = readFile("/".join([tpls["output_dir"], path ]))
  createFile(content, item['output'])
