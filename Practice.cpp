#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>

void boundaryfilleight(int x,int y,int fill,int boundary)
{
int current=getpixel(x,y);
if((current!=boundary)&&(current!=fill))
{
putpixel(x,y,fill);
boundaryfilleight(x,y+1,fill,boundary);
boundaryfilleight(x+1,y,fill,boundary);
boundaryfilleight(x-1,y,fill,boundary);
boundaryfilleight(x,y-1,fill,boundary);
boundaryfilleight(x+1,y+1,fill,boundary);
boundaryfilleight(x+1,y-1,fill,boundary);
boundaryfilleight(x-1,y-1,fill,boundary);
boundaryfilleight(x-1,y+1,fill,boundary);
}
}

void floodfilleight(int x,int y,int fill,int old)
{
int current=getpixel(x,y);
if(current==old)
{
putpixel(x,y,fill);
floodfilleight(x+1,y,fill,old);
floodfilleight(x,y-1,fill,old);
floodfilleight(x,y+1,fill,old);
floodfilleight(x-1,y,fill,old);
floodfilleight(x+1,y+1,fill,old);
floodfilleight(x+1,y-1,fill,old);
floodfilleight(x-1,y-1,fill,old);
floodfilleight(x-1,y+1,fill,old);
}
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
rectangle(50,50,100,100);
line(75,50,75,100);
boundaryfilleight(52,52,5,15);
floodfilleight(77,53,4,0);

getch();
}