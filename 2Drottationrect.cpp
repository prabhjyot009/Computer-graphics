//perform 2D rotation of rectangle about origin
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main() {
    int gd=DETECT,gm;
    int x1, y1, x2, y2;

    int x1r, y1r, x2r, y2r;

    int angle;
    float s, c;
    initgraph(&gd, &gm, (char *)"");
    printf("Rotation of rectangle\n");
    printf("Enter coordinates of point 1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter coordinates of point 2: ");
    scanf("%d%d", &x2, &y2);
    rectangle(x1, y1, x2, y2);
    printf("Enter the angle of rotation: ");
    scanf("%d", &angle);
    s = sin(angle * 3.14159 / 180);
    c = cos(angle * 3.14159 / 180);
    x1r = x1 * c - y1 * s;
    y1r = x1 * s + y1 * c;
    x2r = x2 * c - y2 * s;
    y2r = x2 * s + y2 * c;
    rectangle(x1r, y1r, x2r, y2r);
    getch();
    closegraph();
}