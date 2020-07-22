#!/bin/bash

set -e -u

sed -i 's/#\(en_US\.UTF-8\)/\1/' /etc/locale.gen
locale-gen

usermod -s /usr/bin/zsh root
cp -aT /etc/skel/ /root/
chmod 700 /root
# unset the root password
passwd -d root

sed -i 's/#\(PermitRootLogin \).\+/\1yes/' /etc/ssh/sshd_config
sed -i "s/#Server/Server/g" /etc/pacman.d/mirrorlist

# Add Live User
#useradd -m -u 1010 -G users,sys,floppy,scanner,power,rfkill,optical,adm,log,lp,video,network,storage,wheel,audio -s /bin/bash root

# Setup Passwords users: live and root
# chpasswd <<< 'live:live'
# chpasswd <<< 'root:root'

# Adding Post-Install Tasks
systemctl enable gdm.service
systemctl set-default graphical.target

# Networking
systemctl disable systemd-networkd.service
systemctl mask systemd-networkd.service
mkdir -p /etc/NetworkManager/conf.d/
echo "[main]
dns=systemd-resolved" > /etc/NetworkManager/conf.d/dns.conf
systemctl enable NetworkManager.service
systemctl enable systemd-resolved.service

# Enable sudo
# sed -i -e 's/^# %wheel ALL=(ALL) ALL/%wheel ALL=(ALL) ALL/g' /etc/sudoers

