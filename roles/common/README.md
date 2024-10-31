# Install common software

Install common software and tools assumed to be present by default on all the
machines.

To get the list of installed software and packages check the content of files in
`defaults/`.

## Depends

## Parameters
### Variables
#### Required
#### Optionals

* `go_version`: version of go to be insatlled (see https://go.dev/dl/). Default
to `default_go_version`

### Inventory hostvars
#### Required
#### Optionals

## Defaults
* `default_go_version`: 1.22.5

## Returns