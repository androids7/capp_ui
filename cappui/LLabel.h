#include "base.h"

class LLabel{
 
 public:
 LLabel();
 ~LLabel();
 void setText(char *mtext);
 void drawself();
 void onEvent(int type,int p1,int p2);
 void setPos(int xx,int yy);
 
 private:
 char *text="";
 int x=0;
 int y=0;
 
 
 };