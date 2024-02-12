#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
int x1,y1,x2,y2,dx,dy,steps,xinc,yinc;
printf("Enter the values of x1 and y1");
scanf("%d%d",&x1,&y1);
printf("Enter the values of x2 and y2");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy)){
steps=abs(dx);
}
else{
steps=abs(dy);
}
xinc=dx/steps;
yinc=dy/steps;
for(int i=1;i<=steps;i++){
putpixel(x1,y1,RED);
x1=x1+xinc;
y1=y1+yinc;
}
getch();
closegraph();
}