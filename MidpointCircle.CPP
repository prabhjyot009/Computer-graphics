 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 int main(){
 int gd=DETECT,gm;
 initgraph(&gd,&gm,(char*)"");
 int xc,yc,r;
 float x,y,p;
 printf("Radius\txc\tyc\n");
 scanf("%d%d%d",&r,&xc,&yc);
 x=0;
 y=r;
 p=(5/4)-r;
 do{
 putpixel(xc+x,yc+y,7);
 putpixel(xc+x,yc-y,7);
 putpixel(xc-x,yc+y,7);
 putpixel(xc-x,yc-y,7);
 putpixel(xc+y,yc+x,7);
 putpixel(xc+y,yc-x,7);
 putpixel(xc-y,yc+x,7);
 putpixel(xc-y,yc-x,7);
 if(p<0){
 x++;
 p=p+2*x+1;
 }
 else{
 y--;
 x++;
 p=p+2*x-2*y+1;
 }
 }while(x<y);
 getch();
 closegraph();
 }
