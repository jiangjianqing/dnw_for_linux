# dnw_for_linux
dnw-linux的安装：
dnw-linux源码包src目录下包含driver目录和dnw目录，driver目录下是驱动源码，dnw目录下是dnw工具的源码。
安装方法：在dnw-linux源码顶层目录下make;sudo make install即可，产生三个动作：
1. 生成驱动模块secbulk.ko，并复制到/lib/modules/`uname -r`/extra目录；（自动加载驱动模块时到该目录下寻找对应的驱动）
2. 生成可执行文件dnw，并复制到/usr/bin目录下；（使在命令行中可直接执行dnw命令而不必输入dnw的详细路径）
3. 复制dnw.rules到/etc/udev/rules.d目录下；（使检测到用usb线连接开发板和pc时，自动加载驱动模块secbulk.ko）
注：driver源码secbulk.c中的结构体变量secbulk_table[]存放的是usb设备的idVendor和idProduct，当用usb线连接开发板和pc时，终端下会有usb设备的相关信息打印，其中便包含了idVendor和idProduct，如果终端打印的idVendor/idProduct值和secbulk_table[]中存放的值不一样，应修改secbulk_table[]至实际的idVendor和idProduct，同时也要修改dnw.rules文件。
