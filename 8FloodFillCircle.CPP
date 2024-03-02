#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void floodfill8(int x, int y, int fill, int old) {
    int current = getpixel(x, y);
    if (current == old) {
        putpixel(x, y, fill);
        floodfill8(x, y + 1, fill, old);
        floodfill8(x + 1, y, fill, old);
        floodfill8(x - 1, y, fill, old);
        floodfill8(x, y - 1, fill, old);
        floodfill8(x - 1, y + 1, fill, old);
        floodfill8(x + 1, y + 1, fill, old);
        floodfill8(x + 1, y - 1, fill, old);
        floodfill8(x - 1, y - 1, fill, old);
    }
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
circle(66,66,14);
floodfill8(66,66,4,0);
getch();
}