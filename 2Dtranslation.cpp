#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
	int gd=DETECT,gm;
    initgraph(&gd, &gm, (char *)"");
	line(0,250,600,250);
	line(300,0,300,500);
	float x1,x2,x3,y1,y2,y3,tx,ty;
	printf("Enter x1,x2,x3 and y1,y2,y3\n");
	scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
	printf("Enter tx and ty\n");
	scanf("%f%f",&tx,&ty);
	line(x1+300,y1+250,x2+300,y2+250);
	line(x2+300,y2+250,x3+300,y3+250);
	line(x3+300,y3+250,x1+300,y1+250);	
	x1+=tx;x2+=tx;x3+=tx;
	y1+=ty;y2+=ty;y3+=ty;
	setcolor(RED);
	line(x1+300,y1+250,x2+300,y2+250);
	line(x2+300,y2+250,x3+300,y3+250);
	line(x3+300,y3+250,x1+300,y1+250);
	getch();
}
