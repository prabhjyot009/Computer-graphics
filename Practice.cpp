#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void boundaryfill4(int x,int y,int fill,int boundary){
    int current=getpixel(x,y);
    if(current!=boundary && current!=fill){
        putpixel(x,y,fill);
        boundaryfill4(x,y+1,fill,boundary);
        boundaryfill4(x+1,y,fill,boundary);
        boundaryfill4(x-1,y,fill,boundary);
        boundaryfill4(x,y-1,fill,boundary);
    }
}
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int x1,y1,x2,y2,x,y,fill,boundary;
    printf("Enter value of x1:");
    scanf("%d",&x1);
    printf("Enter value of y1:");
    scanf("%d",&y1);
    printf("Enter value of x2:");
    scanf("%d",&x2);
    printf("Enter value of y2:");
    scanf("%d",&y2);
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    printf("Fill:");
    scanf("%d",&fill);
    printf("Boundary:");
    scanf("%d",&boundary);
    rectangle(x1,y1,x2,y2);
    boundaryfill4(x,y,fill,boundary);
    getch();
    delay(10000);
}