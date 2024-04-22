#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main() {
    int gd=DETECT,gm;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int sx, sy;
    initgraph(&gd, &gm, (char *)"");
    printf("Scaling of square\n");
    printf("Enter coordinates of point 1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter coordinates of point 2: ");
    scanf("%d%d", &x2, &y2);
	rectangle(x1, y1, x2, y2);
	printf("Enter the scaling factor for x: ");
	scanf("%d", &sx);
	printf("Enter the scaling factor for y: ");
	scanf("%d", &sy);
	x1 = x1 * sx;
	y1 = y1 * sy;
	x2 = x2 * sx;
	y2 = y2 * sy;
	rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
}