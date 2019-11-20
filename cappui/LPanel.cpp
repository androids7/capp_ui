#include "LPanel.h"
#include <string>
#include "LLabel.h"
LPanel::LPanel()
{
 
 }
 
 
 LPanel::~LPanel(){
  
  }
void LPanel::add(void * obj){
 
 objs[o_size]=obj;
 o_size++;
 
 }
 
 void LPanel::onEvent(int type,int p1,int p2){
  
  }
 
 
 void LPanel::drawself(){
  //循环查询插件绘制
  
  for(int i=0;i<o_size;i++)
  {
  LLabel *tmp;
  tmp=(LLabel*)objs[i]; tmp->drawself();
   
   }
    ref(0,0,SCRW,SCRH);
  }