#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
int x,y,xc,yc,p,r;
r=100;
x=0;
y=r;
p=3-(2*r);
xc=319;
yc=239;
do{
putpixel(x+xc,y+yc,5);
putpixel(x+xc,-y+yc,5);
putpixel(-x+xc,y+yc,5);
putpixel(-x+xc,-y+yc,5);
putpixel(y+xc,x+yc,5);
putpixel(y+xc,-x+yc,5);
putpixel(-y+xc,x+yc,5);
putpixel(-y+xc,-x+yc,5);
if(p<0){
x++;
p=p+(4*x)+6;
}
else{
x++;
y--;
p=p+4*(x-y)+10;
}
}while(x<y);
getch();
closegraph();
}