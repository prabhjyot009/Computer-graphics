#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int xc=319,yc=239,r=100,x,y,steps;
    x=0;
    y=r;
    steps=3-2*r;
    do{
        putpixel(xc+x,yc+y,2);
        putpixel(xc+x,yc-y,1);
        putpixel(xc-x,yc+y,1);
        putpixel(xc-x,yc-y,2);
        putpixel(xc+y,yc+x,3);
        putpixel(xc+y,yc-x,4);
        putpixel(xc-y,yc+x,4);
        putpixel(xc-y,yc-x,3);
        if(steps<0){
            x++;
            steps=steps+4*x+6;
        }
        else{
            x++;
            y--;
            steps=steps+4*(x-y)+10;
        }
    }while(x<y);
    getch();
    closegraph();
}