# Join a kubernetes cluster

Join a k8s cluster created with the role `k8s/create`. Kubeconfig file with
privileged credentials to access the cluster are added in the file
`${HOME}/.kube/config` on the host.

The following authentication information must be provided:
* the k8s bootstrap token (see `roles/auth` for details).
* the hash of the cluster CA certificate (see `roles/auth` for details).
* the control-plane certificate key (see `roles/auth` for details).
* path where to find the *kubeconfig* file on the Ansible
  control node  (see `roles/auth` for details).

For details on these parameters, see the `k8s/auth` role documentation. The
easiest way to have the parameters right is to run the `k8s/auth` role before
hand.

In addition, the API address of the cluster must be provided.

> **WARNING**: the kubeconfig file provides full administrive access to the
> cluster, make sur it does not leak to unauthorized persons.

## Depends
Role: `k8s/base`

> **WARNING**: It is assumed that the cluster to join has been created with the
> role `k8s/create`.

## Parameters
### Variables
#### Required
* `token`: the k8s bootstrap token (see `k8s/auth` for details).

* `ca_cert_hash`: the hash of the cluster CA certificate (see `k8s/auth` for details).

* `certificate_key`: the control-plane certificate key (see `k8s/auth` for details).

* `kube_config_local_path`: path where to find the *kubeconfig* file on the Ansible
  control node  (see `k8s/auth` for details).

* `master`: string. API address of the cluster to join.

If the `k8s/auth` role is run on a control-plane node of the cluster before
hand, an easy way to get the variables to their right values is to defined them
with

```yaml
token: "{{ hostvars['ansible_dummy_host']['_token'] }}"
ca_cert_hash: "{{ hostvars['ansible_dummy_host']['_ca_cert_hash'] }}"
certificate_key: "{{ hostvars['ansible_dummy_host']['_certificate_key'] }}"
kube_config_local_path: "{{ hostvars['ansible_dummy_host']['_kube_config'] }}"
```

#### Optionals
  * `control_plane_node`: bool. If true, the node is added to the cluster with
    the control-plane role. Otherwise, it is added as a worker node. Default
    to false.

  * `k8s.controlPlaneEndpoint`: IP or domain name to the API server from which
  information will be fetched (see
  https://kubernetes.io/docs/reference/config-api/kubeadm-config.v1beta3/#kubeadm-k8s-io-v1beta3-BootstrapTokenDiscovery). Ingnored if not defined.

### Inventory hostvars
#### Required
#### Optionals

## Returns
