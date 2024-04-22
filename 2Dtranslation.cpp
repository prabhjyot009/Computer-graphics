#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main()
{
    int gd=DETECT,gm;
    int x1, x2, y1, y2,x3,y3,dx,dy;
    initgraph(&gd, &gm, (char *)"");

	printf("Enter coordinates of a: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter coordinates of b: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter coordinates of c: ");
	scanf("%d%d",&x3,&y3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	printf("Enter the translating factor for x: ");
	scanf("%d",&dx);
	printf("Enter the translating factor for y: ");
	scanf("%d",&dy);
    line(x1+dx,y1+dy,x2+dx,y2+dy);
	line(x2+dx,y2+dy,x3+dx,y3+dy);
	line(x3+dx,y3+dy,x1+dx,y1+dy);
	    getch();
    closegraph();
}