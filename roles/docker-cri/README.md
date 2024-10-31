# Install cri-dockerd

Download, build and install cri-dockerd, runs it as a service.

## Depends


## Parameters
### Variables
#### Required

#### Optionals
* `docker_cri_version`: string. cri-dockerd version to be installed (see
https://github.com/Mirantis/cri-dockerd/releases). Default to
`default_docker_cri_version`.


### Inventory hostvars
#### Required
#### Optionals

## Defaults
* `default_docker_cri_version`: v0.3.14

## Returns