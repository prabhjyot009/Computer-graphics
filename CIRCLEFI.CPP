#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void floodfill4(int x,int y,int fill,int old){
int current=getpixel(x,y);
if(current==old){
putpixel(x,y,fill);
floodfill4(x,y+1,fill,old);
floodfill4(x+1,y,fill,old);
floodfill4(x-1,y,fill,old);
floodfill4(x,y-1,fill,old);
floodfill4(x-1,y+1,fill,old);
floodfill4(x+1,y+1,fill,old);
floodfill4(x+1,y-1,fill,old);
floodfill4(x-1,y-1,fill,old);
}
}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
circle(66,66,14);
floodfill4(66,66,4,0);
getch();
}