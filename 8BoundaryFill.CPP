#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void boundaryfill8(int x,int y,int fill,int boundary){
int current=getpixel(x,y);
if(current!=boundary && current!=fill){
putpixel(x,y,fill);
boundaryfill8(x,y+1,fill,boundary);
boundaryfill8(x+1,y,fill,boundary);
boundaryfill8(x-1,y,fill,boundary);
boundaryfill8(x,y-1,fill,boundary);
boundaryfill8(x-1,y+1,fill,boundary);
boundaryfill8(x+1,y+1,fill,boundary);
boundaryfill8(x+1,y-1,fill,boundary);
boundaryfill8(x-1,y-1,fill,boundary);
}
}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
rectangle(50,50,100,100);
boundaryfill8(55,55,4,15);
getch();
}
