#include "base.h"

class LPanel{
 
 public:
 LPanel();
 ~LPanel();
 void add(void *obj);
 
void drawself();
void onEvent(int type,int p1,int p2);

 private:
 void *objs[1000];
 int o_size=0;
 
 
 };