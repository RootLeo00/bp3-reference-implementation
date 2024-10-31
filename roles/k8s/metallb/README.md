# Install and configure MetalLB on an kubernets cluster

Install MetalLB in the kubernetes cluster and configure it to run in layer 2
mode. An IPAddressPool named `blueprint-pool` is created with all IPs provided
in `k8s.metallb.addresses`.

## Depends

This role must be run on the machine that has `kubectl` installed and configured
to get admin access to the kubernetes cluster.

> **NOTE**: The kubernetes cluster must have at least one node where workload
> can be scheduled.

## Parameters
### Variables
#### Required

* `k8s.metallb.addresses`: list of addresses to added to the IP address pool.
Addresses can be defined by CIDR, by range, and both IPV4 and IPV6 addresses
can be assigned (see https://metallb.universe.tf/configuration/ for details).

#### Optionals

### Inventory hostvars
#### Required
#### Optionals

## Defaults

## Returns
