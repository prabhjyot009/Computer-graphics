#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int x1,x2,y1,y2;
    float dx,dy,steps,x,y;
    printf("Enter the values for x1 and y1:");
    scanf("%d%d",&x1,&y1);
    printf("Enter the values for x1 and y1:");
    scanf("%d%d",&x2,&y2);
    dx=(float)(x2-x1);
    dy=(float)(y2-y1);
    steps=2*dy-dx;
    x=x1;
    y=y1;
    do{
        putpixel(x,y,5);
        if(steps<0){
            x++;
            steps=steps+2*dy;
        }
        else{
            x++,y++;
            steps=steps+2*dy-2*dx;
        }
    }while(x<=x2);
    getch();
    closegraph();
}