#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
int x1,y1,x2,y2;
float dx,dy,steps,x,y,xinc,yinc;
printf("Enter the values of x1 and y1\n");
scanf("%d%d",&x1,&y1);
printf("Enter the values of x2 and y2\n");
scanf("%d%d",&x2,&y2);
dx=(float)(x2-x1);
dy=(float)(y2-y1);
if(dx>=dy){
steps=dx;
}
else{
steps=dy;
}
xinc=dx/steps;
yinc=dy/steps;
x=x1;
y=y1;
for(int i=1;i<=steps;i++){
putpixel(x,y,2);
x+=xinc;
y+=yinc;
}
getch();
closegraph();
}