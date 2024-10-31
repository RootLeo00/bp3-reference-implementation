# Prepare host for kubernetes cluster

Prepare the host to be able to take part in a kubernetes cluster. It permanently
disables swap and installs `kubectl`, `kubelet`, `kubeadm`, and `helm` on the
host. Usefull information for later operations are registered in Ansible
host-level variables.

> **WARNING**: when multiple control plane nodes are used (i.e., HA), then
> `k8s.controlPlaneEndpoint` must be defined and it must be the address of the
> load balancer instance in charge of the cluster management.

## Depends
Roles: `common`, `docker`, and `docker-cri`

## Parameters
### Variables
#### Required

#### Optionals
* `k8s.version`: string. k8s version to install (see https://kubernetes.io/releases/). Default to `default_k8s_version`. Supported version are `1.28`,
`1.29`, and `1.30`.

* `k8s.runtime`: string. runtime to use in the cluster. Default to
`default_k8s_runtime`. Only `docker` is supported.

* `k8s.serviceSubnet`: string. IPv4 subnet to use for services. Default to `default_k8s_serviceSubnet`.

* `k8s.podSubnet`: string. IPv4 subnet to use for pods. Defaults to `default_k8s_podSubnet`.

* `k8s.dnsDomain`: string. DNS domain to use in the cluster. Default to `default_k8s_dnsDomain`.

* `k8s.bindPort`: string. Bind port for K8S API for the host. Default to
`default_k8s_bindPort`.

* `k8s.controlPlaneEndpoint`: string. The control plane endpoint to be used in
the cluster (see https://kubernetes.io/docs/reference/config-api/kubeadm-config.v1beta3/).
Default to `{masters[0]['apiserver_advertise_address']}:{k8s.bindPort}`.

### Inventory hostvars
#### Required
#### Optionals
* `name`: string. Hostname to be used in the cluster. Default to
`inventory_hostname` (see
https://docs.ansible.com/ansible/latest/reference_appendices/special_variables.html).

* `apiserver_advertise_address`: string. IP address for the API server to
advertise (see https://kubernetes.io/docs/reference/config-api/kubeadm-config.v1beta3/#kubeadm-k8s-io-v1beta3-APIEndpoint). Ignored if not defined.

* `bindPort`: int. Bind port for K8S API. Default to `k8s.bindPort`.
  
* `KUBELET_EXTRA_ARGS`: yaml. Extra args for kublet (see
  https://cluster-api.sigs.k8s.io/tasks/bootstrap/kubeadm-bootstrap/kubelet-config#set-kubelet-flags-via-kubeadmconfigspeckubeletextraargs).
  Ignored if not defined.

  Example:
    ```yaml
      KUBELET_EXTRA_ARGS:
        cpu-manager-policy: "static"
        kube-reserved=cpu: "2"
    ```

## Defaults
* `default_k8s_runtime`: docker
* `default_k8s_version`: "1.29"
* `default_k8s_serviceSubnet`: '10.96.0.0/16'
* `default_k8s_podSubnet`: '10.244.0.0/16'
* `default_k8s_bindPort`: 6443
* `default_k8s_dnsDomain`: 'cluster.local'

## Retruns
The following Ansible host-level variables are registered according to defintion
above (see above for details):

* `_k8s_version`: k8s version to install.
* `_kubelet_extra_args`: Extra args for kublet.
* `_name`: Hostname to be used in the cluster.
* `_advertiseAddress`: IP address for the API server to advertise.
* `_bindPort`: Bind port for K8S API for the host.
* `_controlPlaneBindPort`: Bind port for K8S API for the control plane.
* `_criSocket`: Path to the CRI socket to connect (see
https://kubernetes.io/docs/reference/setup-tools/kubeadm/kubeadm-init/ for details).
* `_serviceSubnet`: IPv4 subnet to use for services.
* `_podSubnet`: IPv4 subnet to use for pods.
* `_dnsDomain`: DNS domain to use in the cluster.
