//加载系统头文件base.h
#include "base.h"
#include "LLabel.h"
#include "LPanel.h"
void Lmain(){
 LPanel panel;
 
 
 LLabel label;
 label.setText("hello");
 label.setPos(SCRW/2,SCRH/2);
 panel.add(&label);
 panel.drawself();
 
 }


extern "C"
{
 void helloworld()
{
    //用指定颜色清除屏幕
    cls(0,0,0);
    //画文字
    Lmain();
}


//入口函数，程序启动时开始执行
int init()
{
    //调用函数helloworld
    helloworld();
    
    return 0;
}




//event函数，接收消息事件
int event(int type, int p1, int p2)
{
    if(KY_UP == type)
    {
        switch(p1)
        {
        case _BACK:
            exit();
            break;
        case _MENU:
            break;
        }
    }

    return 0;
}

//应用暂停，当程序进入后台或变为不可见时会调用此函数
int pause()
{
    return 0;
}

//应用恢复，程序变为可见时调用此函数
int resume()
{
    return 0;
}

//应用退出函数，在应用退出时可做一些内存释放操作
int exitApp()
{
    return 0;
}


}
 