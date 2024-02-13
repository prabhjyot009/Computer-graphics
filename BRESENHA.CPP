#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
int x,y,x1,x2,y1,y2,dx,dy,steps,xinc,yinc;
printf("Enter the vales of x1 and y1\n");
scanf("%d%d",&x1,&y1);
printf("Enter the values of x2 and y2\n");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
steps=2*dy-dx;
x=x1;
y=y1;
for(int i=1;i<=steps;i++){
if(steps<0){
steps=steps+2*dx;
y++;
putpixel(x,y,4);
}
else{
steps=steps+2*dx-2*dy;
x++;
y++;
putpixel(x,y,4);
}
}
getch();
closegraph();
}