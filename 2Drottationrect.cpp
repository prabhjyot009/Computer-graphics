#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(0, 250, 600, 250);
    line(300, 0, 300, 500);
    float x1, x2, x3, x4, y1, y2, y3, y4,x11, x21, x31, x41, y11, y21, y31, y41, angle;
    printf("Enter x1, x2, x3, x4 and y1, y2, y3, y4:\n");
    scanf("%f%f%f%f%f%f%f%f", &x1, &x2, &x3, &x4, &y1, &y2, &y3, &y4);
    printf("Enter rotation angle (in degrees):\n");
    scanf("%f", &angle);
    angle = angle * (3.14159 / 180.0);
    line(x1 + 300, y1 + 250, x2 + 300, y2 + 250);
    line(x2 + 300, y2 + 250, x3 + 300, y3 + 250);
    line(x3 + 300, y3 + 250, x4 + 300, y4 + 250);
    line(x4 + 300, y4 + 250, x1 + 300, y1 + 250);
    x11 = x1 * cos(angle) - y1 * sin(angle);
    y11 = x1 * sin(angle) + y1 * cos(angle);
    x21 = x2 * cos(angle) - y2 * sin(angle);
    y21 = x2 * sin(angle) + y2 * cos(angle);
    x31 = x3 * cos(angle) - y3 * sin(angle);
    y31 = x3 * sin(angle) + y3 * cos(angle);
    x41 = x4 * cos(angle) - y4 * sin(angle);
    y41 = x4 * sin(angle) + y4 * cos(angle);
    setcolor(RED);
    line(x11 + 300, y11 + 250, x21 + 300, y21 + 250);
    line(x21 + 300, y21 + 250, x31 + 300, y31 + 250);
    line(x31 + 300, y31 + 250, x41 + 300, y41 + 250);
    line(x41 + 300, y41 + 250, x11 + 300, y11 + 250);
    getch();
    closegraph();
}
