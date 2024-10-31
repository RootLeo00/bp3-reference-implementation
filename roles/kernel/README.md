# Setup kernel

This role customizes the kernel.

It is used to
* load kernel modules;
* set kernel attributes;
* set PAM limits;
* install and load a specific kernel version.

All changes are persistent such that customizations remain to their new values
even after reboot.

> **WARNING**: if a different kernel version than the current running one is
> requested the system will reboot.

## Parameters
### Variables
#### Required
* `kernel.modules`: list of modules to load. Default to `default_kernel_modules`.

* `kernel.attributes`: list of kernel attributes to set. Default to `default_kernel_attributes`.

* `kernel.limits`: list of kernel attributes to set. Default to `default_kernel_limits`.

#### Optionals
* `kernel.hugepage.number`: number of hugepage. If absent, it is ignored.

* `install_custom_kernel`: boolean. Determine if a custom kernel needs to be
installed and configured. If absent, it is ignored.

### Inventory hostvars
#### Required
#### Optionals
* `kernel.image`: string. Kernel version to install. For example, to install the
`linux-image-6.5.0-44-lowlatency` kernel, set this to `6.5.0-44-lowlatency`. The
kernel version must be available on the package repository. If absent, it is
ignored.

* `kernel.GRUB_CMDLINE_LINUX_DEFAULT`: string. GRUB linux command line (see
https://help.ubuntu.com/community/Grub2/Setup). If absent, it is ignored.

## Defaults
* `default_kernel_modules`: []

* `default_kernel_attributes`: []

* `default_kernel_limits`: []