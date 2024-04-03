#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>

void floodfill4(int x, int y, int fill, int old) {
    int current = getpixel(x, y);
    if (current == old) {
        if (x < 200 && y < 300) {
            putpixel(x, y, fill);
        }
        else {
            putpixel(x, y, 4); 
        }
        floodfill4(x + 1, y, fill, old);
        floodfill4(x, y + 1, fill, old);
        floodfill4(x - 1, y, fill, old);
        floodfill4(x, y - 1, fill, old);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // rectangle(195, 195, 245, 245);
    line(100,300,200,100);
    line(200,100,300,300);
    line(300,300,100,300);
    floodfill4(200, 200, 12, 0);
    getch();
    closegraph();
}
