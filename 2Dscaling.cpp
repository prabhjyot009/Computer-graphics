#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
    initgraph(&gd, &gm, (char *)"");
	line(0,250,600,250);
	line(300,0,300,500);
	float x1,x2,x3,x4,y1,y2,y3,y4,sx,sy;int units;
	printf("Enter x1,x2,x3,x4 and y1,y2,y3,y4\n");
	scanf("%f%f%f%f%f%f%f%f",&x1,&x2,&x3,&x4,&y1,&y2,&y3,&y4);
	printf("Enter sx and sy\n");
	scanf("%f%f",&sx,&sy);
	line(x1+300,y1+250,x2+300,y2+250);
	line(x2+300,y2+250,x3+300,y3+250);
	line(x3+300,y3+250,x4+300,y4+250);
	line(x4+300,y4+250,x1+300,y1+250);
    x1*=sx;x2*=sx;x3*=sx;x4*=sx;
	y1*=sy;y2*=sy;y3*=sy;y4*=sy;
	setcolor(RED);
	line(x1+300,y1+250,x2+300,y2+250);
	line(x2+300,y2+250,x3+300,y3+250);
	line(x3+300,y3+250,x4+300,y4+250);
	line(x4+300,y4+250,x1+300,y1+250);
    getch();
}
