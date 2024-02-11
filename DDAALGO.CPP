#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
line(100,100,100,200);
return 0;
}