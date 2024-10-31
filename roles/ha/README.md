# Deploy HA Proxy for k8s API

Deploys HA Proxy as a container. All hosts belonging to the Ansible inventory
`masters` group are added in the load balancer pool.

The HA Proxy listens on `*:6443`, as such any IP of the host can be used to
reach the k8s cluster.

> **NOTE:** It is assumed that default k8s bind port `6443` is used for all 
> control-plane nodes API.

> **WARNING**: the hostvar `apiserver_advertise_address` must be defined for all
> nodes in the pool. Load balancing is performed to the IP address sepecified
> in the hostvar `apiserver_advertise_address`.

## Depends

## Parameters
### Variables
#### Required
#### Optionals

### Inventory hostvars
#### Required
#### Optionals

## Defaults

## Returns