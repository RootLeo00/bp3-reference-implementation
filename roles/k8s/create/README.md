# Create a kubernetes cluster

Create a k8s cluster. Either calico or flannel CNI is installed and configured,
depending on the value of `k8s.cni_plugin`. Multus CNI is installed in the
cluster.

Kubeconfig file with privileged credentials to access the cluster are added in
the file `${HOME}/.kube/config` on the host.

> **WARNING**: the kubeconfig file provides full administrive access to the
> cluster, make sur it does not leak to unauthorized persons.

## Depends
Role: `k8s/base`

## Parameters
### Variables
#### Required

#### Optionals
* `k8s.clusterName`: string. Name to give to the cluster. Default to
  `default_k8s_clusterName`.

* `k8s.cni_plugin`: string. The CNI plugin to use for the cluster. Default to
  `default_k8s_cni_plugin`. supported values: `calico` or `flannel`.

* `k8s.calico.nodeAddressAutodetectionV4`: dict. IPv4 autodetection used by
  calcico (see https://docs.tigera.io/calico/latest/networking/ipam/ip-autodetection).
  Default to `default_k8s_calico_nodeAddressAutodetectionV4`.

* `k8s.calico.encapsulation`: string. Encapsulation to be used by calcio (see
  https://docs.tigera.io/calico/latest/reference/installation/api#operator.tigera.io/v1.EncapsulationType).
  Default to `default_k8s_calico_encapsulation`.

* `k8s_calico_version`: string. Version of calico to be installed (see
  https://github.com/projectcalico/calico/releases). Default to
  `default_k8s_calico_version`.

* `k8s_flannel_version`: string. Version of flannel to be installed (see
  https://github.com/flannel-io/flannel/releases). Default to
  `default_k8s_flannel_version`.

### Inventory hostvars
#### Required
#### Optionals

## Defaults
* `default_k8s_clusterName`: 'kubernetes'
* `default_k8s_cni_plugin`: 'calico'
* `default_k8s_calico_encapsulation`: 'VXLAN'
* `default_k8s_calico_nodeAddressAutodetectionV4`: `kubernetes: NodeInternalIP`
* `default_k8s_calico_version`: 'v3.24.1'
* `default_k8s_flannel_version`: 'v0.24.4'

## Returns
