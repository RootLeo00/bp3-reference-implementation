# Deploy the environment

## Deployment node

```console
sudo apt install docker.io
```

If there is no id_rsa file, create it with the following command:

```console
ssh-keygen -t rsa
```

Then copy the .pub file to the $HOME/.ssh/authorized_hosts of all the nodes that will be managed by the deployment container
```
cat $HOME/.ssh/id_rsa.pub
```

To build the deployment container: 

```console
docker build -t deployment_node -f Dockerfile .
```

```console
docker run --rm -it -v "$(pwd)":/blueprint -v ${HOME}/.ssh/id_rsa:/private_key deployment_node
```

## Create secrets file

We recommand to encryp the secrets file, for that, we use Ansible vault. To
create the file and vault it, use the following command:

```console
EDITOR=nano ansible-vault edit secrets.yaml
```

In this secret file you have to define

```yaml
secrets:
  prometheus_basic_auth_password: REDACTED
  grafana_password: REDACTED
```

This will create the encrypted file `secrets.yaml` that we can use later to
access to critical data.

## deploy the monitoring collector
```console
ansible-playbook -i inventories/staging --extra-vars "@params.yaml" --extra-vars "@secrets.yaml" --ask-vault-pass lpg.yaml 
```

> If you don't want to type the vault password, you can  write you vault
> password in a file (e.g., `a_password_file`) and get it from there by
> replacing `--ask-vault-pass` by `--vault-id dev@a_password_file`.

## deploy the cluster
```console
ansible-playbook -i inventories/staging --extra-vars "@params.yaml" --extra-vars "@secrets.yaml" --ask-vault-pass k8s-cluster.yaml 
```

## Deploy 5G network
```console
ansible-playbook -i inventories/staging --extra-vars "@params.yaml" --extra-vars "@params.5g.yaml" --extra-vars "@secrets.yaml" --ask-vault-pass 5g.yaml 
```
