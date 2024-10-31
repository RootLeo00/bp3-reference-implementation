FROM ubuntu:24.04
RUN apt update && apt install -y python3-pip git rsync vim nano emacs
RUN python3 -m pip install --break-system-packages --user ansible-core==2.17.2
RUN echo "export PATH=$PATH:~/.local/bin" >> ~/.bashrc
RUN mkdir /reqs/
COPY collections/requirements.yml /reqs/ansible-galaxy.yml
COPY requirements.txt /reqs/python3.txt
RUN ~/.local/bin/ansible-galaxy install -r /reqs/ansible-galaxy.yml
RUN pip3 install --break-system-packages -r /reqs/python3.txt
WORKDIR /blueprint