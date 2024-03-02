#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
int x,y,x1,x2,y1,y2,dx,dy,steps;
printf("Enter the vales of x1 and y1\n");
scanf("%d%d",&x1,&y1);
printf("Enter the values of x2 and y2\n");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
steps=2*dx-dy;
x=x1;
y=y1;
while(y<=y2){
putpixel(x,y,7);
if(steps<0){
y=y+1;
steps=steps+2*dx;
}
else{
x=x+1;
y=y+1;
steps=steps+2*dx-2*dy;
}
}
getch();
closegraph();
}