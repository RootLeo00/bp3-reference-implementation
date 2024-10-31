# Install docker

Install docker and docker compose. Necessary kernel modules are loaded and IP
forwarding is activated.

The current user is added to the `docker` group in order for it to have access
to docker.

The installation allows to use docker in ramdisk environement.

The installation allows to use a specific docker data root.

> **WARNING**: all previous docker installation and configuration files will be
> premanently removed during the installation. If docker is already installed,
> it will be stopped and deinstalled. There is no warranty that the containers
> that were running with the previous docker installation with still work.
> The content of `/etc/systemd/system/docker.service.d/` and `/etc/docker/` will
> be removed before the installation, potentially causing the definitive loss of
> data. If a docker root directory is provided, the directory will be removed
> before the installation of docker, potentially causing the definitive loss of
> data if the provided directory already existed.

## Depends
Role: `common`

## Parameters
### Variables
#### Required

#### Optionals
* `docker.insecure_registries`: list of insecure registries for docker, e.g.,
`"192.0.2.1:5000"` (see: https://docs.docker.com/reference/cli/dockerd/#insecure-registries).
Ignored if not defined.

* `docker.registry_mirrors:` list of docker registry mirrors, e.g.,
`"http://192.0.2.1:5001"` (see, https://docs.docker.com/reference/cli/dockerd/#daemon-configuration-file).
Ignored if not defined.

* `docker.data_root`: string. Path to the directory for root of persisted
Docker data. Ignored if not defined.

### Inventory hostvars
#### Required
#### Optionals
* `ramdisk`: bool. Define if docker is installed on a system launched in ramdisk
  or not. If true the machine is using ramdisk. Otherwise, it is not. Default to
  false.

## Defaults

## Returns
