## gcc编译模式说明
手机C很早开始就在尝试采用编译模式运行图形程序，之前采用了tcc编译器，由于兼容性问题一直没有公开，后来尝试采用gcc，克服了各种难题，手机C从4.6版本正式支持gcc编译模式  
gcc编译模式直接将代码编译为安卓可执行的so文件，提高运行效率，可以制作非常流畅的游戏。  
**运行编译模式需要的条件：**  
gcc安装器：https://www.yzjlb.net/app/opmrcc/gcc/  
安装完成后，重启手机C，会看到解压提示，解压即可安装。
目前，gcc编译器只支持cpu架构为arm的手机(99%的手机都是这个架构)，一些x86架构的平板或电脑模拟器不受支持。


