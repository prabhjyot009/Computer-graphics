//make a custom coordinate system using 2 lines and then implement 2D translation of a triangle using this custom coordinate system.

#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x1, y1, x2, y2, x3, y3, tx, ty;
    printf("Enter the values of x1 and y1\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the values of x2 and y2\n");
    scanf("%d %d", &x2, &y2);
    printf("Enter the values of x3 and y3\n");
    scanf("%d %d", &x3, &y3);
    printf("Enter the values of tx and ty\n");
    scanf("%d %d", &tx, &ty);
    line(0, 0, 0, 100);
    line(0, 0, 100, 0);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1 = x1 + tx;
    y1 = y1 + ty;
    x2 = x2 + tx;
    y2 = y2 + ty;
    x3 = x3 + tx;
    y3 = y3 + ty;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}