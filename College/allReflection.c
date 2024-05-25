#include <stdio.h>
#include <graphics.h>
#include <math.h>
void plot(int x1,int x2,int x3,int y1,int y2,int y3){
	line(x1+300,y1+250,x2+300,y2+250);
	line(x2+300,y2+250,x3+300,y3+250);
	line(x1+300,y1+250,x3+300,y3+250);
}
int main()
{
    int gd = DETECT, gm, s;
    initgraph(&gd, &gm, (char *)"");
    int x1,y1,x2,y2,x3,y3;
    line(300, 0, 300, 500);
    line(0, 250, 600, 250);
    printf("Enter x1,x2,x3,y1,y2,y3 : ");
	scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);
    setcolor(3);
    plot(x1,x2,x3,y1,y2,y3);
    printf("1.x axis:\n2.y axis:\n3.y=-x axis:\n4.y=x axis:\n");
    printf("Selection:");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
    {
        setcolor(5);
		plot(x1,x2,x3,-y1,-y2,-y3);
        break;
    }
    case 2:
    {
        setcolor(5);
		plot(-x1,-x2,-x3,y1,y2,y3);
        break;
    }
    case 3:
    {
        setcolor(5);
		plot(-x1,-x2,-x3,-y1,-y2,-y3);
        break;
    }
    case 4:
    {
        setcolor(5);
		plot(y1,y2,y3,x1,x2,x3);
        break;
    }
    }
    getch();
    closegraph();
}