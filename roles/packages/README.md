# Linux and Python packages

Manage system and python packages. This roles allows to install or remove:
* system packages;
* python packages.

Packages are installed system wide and accessible to all users.

## Parameters
### Variables
#### Required
* `packages.system_remove`: system packages to be remove on the entire
  system before installing the rest. List of package names (need to be the name
  as supported by the distribution). Version can be added to the name if a
  specific one has to be specified.

* `packages.system`: system packages to be installed on the entire system.
  List of package names (need to be the name as supported by the distribution).
  Version can be added to the name if a specific one has to be installed.

* `packages.python_remove`: python packages to be removed on the entire system
  before installing the rest. List of package names (need to be the name as
  supported by the python nsatllation). Version can be added to the name if a
  specific one has to be removed.

* `packages.python`: python packages to be installed on the entire system.
  List of package names (need to be the name as supported by the python
  insatllation). Version can be added to the name if a specific one has to be
  installed.

#### Optionals

### Inventory hostvars
#### Required
#### Optionals

## Defaults
