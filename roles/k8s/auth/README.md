# Get authenticated access to kubernetes cluster

> **DANGER ZONE**: This role creates files and memory variables on the ansible
> control node that can be used to gain full access to the kubernetes cluster.
> Make sure that this roles is exectued in a secured environment.

Get information necessary to connect to a kubernetes cluster and manage it with
`kubeadm`.  A kubernetes bootstrap token of 1h validity is generated (see
https://kubernetes.io/docs/reference/access-authn-authz/bootstrap-tokens/).

The provided information is:
* k8s bootstrap token
* kubeconfig file
* hash of the cluster CA certificate
* control-plane certificate key

A temporary directory is created where the *kubeconfig* file is saved (see
https://docs.ansible.com/ansible/latest/collections/ansible/builtin/tempfile_module.html
for details on how the temporary files are created).

> **WARNING**: the kubeconfig file provides full administrive access to the
> cluster, make sur it does not leak to unauthorized persons.

For automation purposes, a dummy host called `ansible_dummy_host` is created in
the runtime inventory with the following variables:

* `_token`: the k8s bootstrap token

* `_kube_config`: path where to find the *kubeconfig* file on the Ansible
  control node.

* `_ca_cert_hash`:  the hash of the cluster CA certificate

* `_certificate_key`: the control-plane certificate key

* `_tempdir`: the absolute path to the temporary directory created on the
Ansible control node.

> **NOTE**: The location of the kubeconfig file on the Ansible control node is
> printed while executing the role.

## Depends
This role must be run on a control-plane kubernetes node created with the role
`k8s-create`.

## Parameters
### Variables
#### Required
#### Optionals

### Inventory hostvars
#### Required
#### Optionals

## Defaults

## Returns

A dummy host called `ansible_dummy_host` is created in the runtime inventory
with the following variables:

* `_token`: the k8s bootstrap token

* `_kube_config`: path where to find the *kubeconfig* file on the Ansible
  control node.

* `_ca_cert_hash`:  the hash of the cluster CA certificate

* `_certificate_key`: the control-plane certificate key

* `_tempdir`: the absolute path to the temporary directory created on the
Ansible control node.