#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int x1,y1,x2,y2,x3,y3,x4,y4,sx,sy,s;
    line(300, 0, 300, 500);
    line(0, 250, 600, 250);
    printf("Enter x1,y1,x2,y2,x3,y3,x4,y4 : ");
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    line(x1+300,y1+250,x2+300,y2+250);
    line(x2+300,y2+250,x3+300,y3+250);
    line(x3+300,y3+250,x4+300,y4+250);
    line(x4+300,y4+250,x1+300,y1+250);
    setcolor(3);
    printf("Selection:");
    scanf("%d",&s);
    switch(s){
    case 1:{
    printf("for sx enter value of sx:");
    scanf("%d", &sx);
    line(x1+300+(sx*y1),y1+250,x2+300+(sx*y2),y2+250);
    line(x2+300+(sx*y2),y2+250,x3+300+(sx*y3),y3+250);
    line(x3+300+(sx*y3),y3+250,x4+300+(sx*y4),y4+250);
    line(x4+300+(sx*y4),y4+250,x1+300+(sx*y1),y1+250);
    setcolor(4);
    break;
    }
    case 2:{
    printf("for sy enter value of sy:");
    scanf("%d", &sy);
    line(x1+300,y1+250+(sy*x1),x2+300,y2+250+(sy*x2));
    line(x2+300,y2+250+(sy*x2),x3+300,y3+250+(sy*x3));
    line(x3+300,y3+250+(sy*x3),x4+300,y4+250+(sy*x4));
    line(x4+300,y4+250+(sy*x4),x1+300,y1+250+(sy*x1));
    setcolor(5);
    break;
    }}
    getch();
}