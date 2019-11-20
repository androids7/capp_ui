#include "LLabel.h"
#include <string>
LLabel::LLabel()
{
 
 }
 
 
 LLabel::~LLabel(){
  
  }
void LLabel::setText(char * mtext){
 text=mtext;
 
 }

void LLabel::setPos(int xx,int yy){
 x=xx;
 y=yy;
 }
 void LLabel::onEvent(int type,int p1,int p2){
  
  }
 
 void LLabel::drawself(){
  
  dtext (text, x, y, 255, 255, 255, 0, 1);
    //Ë¢ÐÂÆÁÄ»
    
  }