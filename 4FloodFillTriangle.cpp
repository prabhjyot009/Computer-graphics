#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void floodfill4(int x, int y, int fill, int old) {
    int current = getpixel(x, y);
    if (current == old) {
        putpixel(x, y, fill);
        floodfill4(x, y + 1, fill, old);
        floodfill4(x + 1, y, fill, old);
        floodfill4(x - 1, y, fill, old);
        floodfill4(x, y - 1, fill, old);
    }
}

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    line(100, 300, 200, 100);
    line(200, 100, 300, 300);
    line(300, 300, 100, 300);
    floodfill4(200, 200, 19, 0);

    getch();
}