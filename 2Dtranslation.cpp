//Write a program to implement 2-D translation of a triangle.

#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x1, y1, x2, y2, x3, y3, tx, ty;
    cout << "Enter the values of x1 and y1\n";
    cin >> x1 >> y1;
    cout << "Enter the values of x2 and y2\n";
    cin >> x2 >> y2;
    cout << "Enter the values of x3 and y3\n";
    cin >> x3 >> y3;
    cout << "Enter the values of tx and ty\n";
    cin >> tx >> ty;
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