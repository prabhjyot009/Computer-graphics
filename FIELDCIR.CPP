 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 void main(){
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
 int x,y,xc,yc,r,p;
 x=0;
 y=r;
 r=100;
 xc=319;
 yc=239;
 p=(5/4)-r;
 do{
 if(p<0){
 x++;
 p=p+2*x+1;
 }
 else{
 y--;
 x++;
 p=p+2*x-2*y+1;
 }
 putpixel(xc+x,yc+y,RED);
 putpixel(xc+x,yc-y,RED);
 putpixel(xc-x,yc+y,RED);
 putpixel(xc-x,yc-y,RED);
 putpixel(xc+y,yc+x,RED);
 putpixel(xc+y,yc-x,RED);
 putpixel(xc-y,yc+x,RED);
 putpixel(xc-y,yc-x,RED);
 }while(x<y);
 getch();
 closegraph();
 }
