Linux基本命令

uname -r 查看版本号
以前：版本号的第二个奇数开发版，偶数稳定版，有时候不是越新越好

常见发行版：Redhat & Ubuntu
CentOS可以看作免费的Red hat


tree / -L 2 查看树结构

su root
init 2

fdisk -l
mkdir /mnt/usb
mount /dev/sdb4 /mnt/usb
ls /mnt/usb
cd /usb
touch aa bb cc dd ee //generate file aa bb cc dd ee
cd ..
umont /mnt/usb 

命令提示符# $因为用户不一样

ls -l 详细


clear or ctrl+l

pwd : show path

tab:补全

mkdir

绝对路径，相对路径

cd ./xxDir == cd xxDir
cd ..
cd ../xxDir/abc : back to last folder then /xxDir/abc
cd ../../xxDir
and so on..

Generate File & Dic:
touch a.c b.c c.c d.c
mkdir DirA DirB DirC DirD


Remove:
rm -rf *.c dir*
f means force
r means recursive 删文件夹

Move (Cut):
mv aa.c DirA/
mv /DirA/aa.c ./

Copy:
cp /opt/aa.c ./
cp -r DirA DirB : recursive, copy all of containers of DirA to DirB 文件夹拷贝

Rename:改文件名，文件夹名
mv aa.c aa.c

backup:
cp smb.conf smb.conf.bak

show files:
cat xx.a
head smb.conf : 查看前10行
tail smb.conf
more smb.conf : Press F turn page, only downward
less smb.conf: can look up and down
head -n 30 smb.conf
cat -n 25 smb.conf

find:
find / -name smb.config
find / -name sshd_config
find / -type l  查找链接性文件
find / -size +1024k 查找f大于1024k的文件

User Management Command:
直接cd：进入默认目录，root用户是根目录，普通用户在/home/username/

useradd bob :Permission denied

su root
useradd bob
passwd bob

useradd jim
passwd jim

su jim
cd
pwd

su root
userdel bob
rm -rf /home/bob : 删除bob的家23333

can also use : userdel -r bob 

su bob
su root
userdel bob
userdel: user bob is currently used by process 13633
exit
userdel bob

Network command:
ifconfig
ping -c 4 192.168.38.73
c: count

service network restart
service network status
setup
service iptables stop ：停止防火墙
chkconfig iptables : 禁用防火墙
sestatus : 查看selinux，selinux加强版防火墙
setenforce 0 : 禁用selinux
