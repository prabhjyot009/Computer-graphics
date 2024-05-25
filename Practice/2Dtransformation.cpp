#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void plot(int x1, int x2, int x3, int y1, int y2, int y3)
{
    line(x1 + 300, y1 + 250, x2 + 300, y2 + 250);
    line(x2 + 300, y2 + 250, x3 + 300, y3 + 250);
    line(x3 + 300, y3 + 250, x1 + 300, y1 + 250);
}
void plotrectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    line(x1 + 300, y1 + 250, x2 + 300, y2 + 250);
    line(x2 + 300, y2 + 250, x3 + 300, y3 + 250);
    line(x3 + 300, y3 + 250, x4 + 300, y4 + 250);
    line(x4 + 300, y4 + 250, x1 + 300, y1 + 250);
}
void input(int *x1, int *x2, int *x3, int *y1, int *y2, int *y3)
{
    printf("Enter x1,x2,x3 and y1,y2,y3\n");
    scanf("%d%d%d%d%d%d", x1, x2, x3, y1, y2, y3);
}
void inputrect(int *x1, int *x2, int *x3, int *x4, int *y1, int *y2, int *y3, int *y4)
{
    printf("Enter x1,x2,x3,x4 and y1,y2,y3,y4\n");
    scanf("%d%d%d%d%d%d%d%d", x1, x2, x3, x4, y1, y2, y3, y4);
}
int main()
{
    int gd = DETECT, gm, s,x1, x2, x3,x4, y1, y2, y3,y4, x11, x21, x31,x41, y11, y21, y31,y41;
    initgraph(&gd, &gm, (char *)"");
    line(0, 250, 600, 250);
    line(300, 0, 300, 500);
    printf("Select\n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:{
        //translation
        int tx, ty;
        input(&x1, &x2, &x3, &y1, &y2, &y3);
        plot(x1, x2, x3, y1, y2, y3);
        printf("Enter tx and ty:");
        scanf("%d%d", &tx, &ty);
        x1 += tx;
        y1 += ty;
        x2 += tx;
        y2 += ty;
        x3 += tx;
        y3 += ty;
        plot(x1, x2, x3, y1, y2, y3);
        break;
    }
    case 2:
    {
        //scaling
        int sx, sy;
        input(&x1, &x2, &x3, &y1, &y2, &y3);
        plot(x1, x2, x3, y1, y2, y3);
        printf("Enter sx and sy:");
        scanf("%d%d", &sx, &sy);
        x1 *= sx;
        y1 *= sy;
        x2 *= sx;
        y2 *= sy;
        x3 *= sx;
        y3 *= sy;
        plot(x1, x2, x3, y1, y2, y3);
        break;
    }
    case 3:
    {
        //rotation
        float theta;
        inputrect(&x1, &x2, &x3,&x4, &y1, &y2, &y3,&y4);
        plotrectangle(x1, x2, x3, x4, y1, y2, y3, y4);
        printf("Enter theta:");
        scanf("%f", &theta);
        theta = theta * (3.14159 / 180.0);
        x11 = x1 * cos(theta) - y1 * sin(theta);
        y11 = x1 * sin(theta) + y1 * cos(theta);
        x21 = x2 * cos(theta) - y2 * sin(theta);
        y21 = x2 * sin(theta) + y2 * cos(theta);
        x31 = x3 * cos(theta) - y3 * sin(theta);
        y31 = x3 * sin(theta) + y3 * cos(theta);
        x41 = x4 * cos(theta) - y4 * sin(theta);
        y41 = x4 * sin(theta) + y4 * cos(theta);
        plotrectangle(x11, x21, x31, x41, y11, y21, y31, y41);
        break;
    }
    case 4:
    {
        //reflection
        int ch;
        input(&x1, &x2, &x3, &y1, &y2, &y3);
        plot(x1, x2, x3, y1, y2, y3);
        printf("Select\n1. x-axis\n2. y-axis\n3. y=-x\n4. y=x");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            y1 = -y1;
            y2 = -y2;
            y3 = -y3;
            break;
        case 2:
            x1 = -x1;
            x2 = -x2;
            x3 = -x3;
            break;
        case 3:
            x1 = -x1;
            x2 = -x2;
            x3 = -x3;
            y1 = -y1;
            y2 = -y2;
            y3 = -y3;
            break;
        case 4:
            int temp;
            temp = x1;
            x1 = y1;
            y1 = temp;
            temp = x2;
            x2 = y2;
            y2 = temp;
            temp = x3;
            x3 = y3;
            y3 = temp;
            break;
        }
        plot(x1, x2, x3, y1, y2, y3);
        break;
    }
    case 5:
    {
        //shearing
        int ch1;
        inputrect(&x1, &x2, &x3,&x4, &y1, &y2, &y3,&y4);
        plotrectangle(x1, x2, x3, x4, y1, y2, y3, y4);
        printf("Select\n1. x-shear\n2. y-shear");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            int shx;
            printf("Enter shx:");
            scanf("%d", &shx);
            x1 += shx * y1;
            x2 += shx * y2;
            x3 += shx * y3;
            x4 += shx * y4;
            break;
        case 2:

            int shy;
            printf("Enter shy:");
            scanf("%d", &shy);
            y1 += shy * x1;
            y2 += shy * x2;
            y3 += shy * x3;
            y4 += shy * x4;
            break;
        }
        plotrectangle(x1, x2, x3, x4, y1, y2, y3, y4);
        break;
    }
    }
    getch();
    closegraph();
}