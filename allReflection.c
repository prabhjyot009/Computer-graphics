#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, s;
    initgraph(&gd, &gm, (char *)"");
    int x1 = 20, y1 = 10, x2 = 10, y2 = 20, x3 = 30, y3 = 20;
    line(0, 250, 600, 250);
    line(300, 0, 300, 500);
    printf("triangle before reflection\n");
    setcolor(3);
    line(x1 + 300, y1 + 250, x2 + 300, y2 + 250);
    line(x2 + 300, y2 + 250, x3 + 300, y3 + 250);
    line(x3 + 300, y3 + 250, x1 + 300, y1 + 250);
    printf("1.x axis:\n2.y axis:\n3.y=-x axis:\n4.y=x axis:\n");
    printf("Selection:");
    scanf("%d", &s);

    switch (s)
    {
    case 1:
    {
        printf("triangle after reflection\n");
        setcolor(5);
        line(x1 + 300, -y1 + 250, x2 + 300, -y2 + 250);
        line(x2 + 300, -y2 + 250, x3 + 300, -y3 + 250);
        line(x3 + 300, -y3 + 250, x1 + 300, -y1 + 250);
        getch();
        break;
    }
    case 2:
    {
        printf("triangle after reflection\n");
        setcolor(5);
        line(-x1 + 300, y1 + 250, -x2 + 300, y2 + 250);
        line(-x2 + 300, y2 + 250, -x3 + 300, y3 + 250);
        line(-x3 + 300, y3 + 250, -x1 + 300, y1 + 250);
        getch();
        break;
    }
    case 3:
    {
        printf("triangle after reflection\n");
        setcolor(5);
        line(-x1 + 300, -y1 + 250, -x2 + 300, -y2 + 250);
        line(-x2 + 300, -y2 + 250, -x3 + 300, -y3 + 250);
        line(-x3 + 300, -y3 + 250, -x1 + 300, -y1 + 250);
        getch();
        break;
    }
    case 4:
    {
        printf("triangle after reflection\n");
        setcolor(5);
        line(y1 + 300, x1 + 250, y2 + 300, x2 + 250);
        line(y2 + 300, x2 + 250, y3 + 300, x3 + 250);
        line(y3 + 300, x3 + 250, y1 + 300, x1 + 250);
        -getch();
        break;
    }
    default:
    {
        printf("Invalid Selection\n");
        break;
    }
    }
    closegraph();
    return 0;
}