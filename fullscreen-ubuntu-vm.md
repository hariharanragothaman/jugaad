```
sudo vi /etc/default/grub
Change the GRUB_CMDLINE_LINUX_DEFAULT=”quiet splash” line to GRUB_CMDLINE_LINUX_DEFAULT=”quiet splash video=hyperv_fb:1920x1080”
sudo update-grub
Restart VM
```
