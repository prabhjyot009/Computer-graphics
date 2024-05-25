#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int Xc = 300;
int Yc = 250;
typedef struct Point {
    float x, y;
} Point;
void multiplyMatrices(float mat1[3][3], float mat2[3][3], float result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void construct(Point p1, Point p2, Point p3) {
    line(p1.x + Xc, p1.y + Yc, p2.x + Xc, p2.y + Yc);
    line(p2.x + Xc, p2.y + Yc, p3.x + Xc, p3.y + Yc);
    line(p3.x + Xc, p3.y + Yc, p1.x + Xc, p1.y + Yc);
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    printf("=====PIVOT POINT ROTATION=====\n");
    line(0, 250, 600, 250);
    line(300, 0, 300, 500);
    Point p1, p2, p3;
    printf("\nEnter x1 and y1:");
    scanf("%f%f", &p1.x, &p1.y);
    printf("\nEnter x2 and y2:");
    scanf("%f%f", &p2.x, &p2.y);
    printf("\nEnter x3 and y3:");
    scanf("%f%f", &p3.x, &p3.y);
    construct(p1, p2, p3);
    Point pivot;
    printf("\nEnter the pivot point(x,y):");
    scanf("%f%f", &pivot.x, &pivot.y);
    float angle;
    printf("\nEnter the angle:");
    scanf("%f", &angle);
    float radian = angle * (M_PI / 180.0); // Convert angle to radians
    float IT_MATRIX[3][3] = {
        {1, 0, -pivot.x},
        {0, 1, -pivot.y},
        {0, 0, 1}
    };
    float ROTATION[3][3] = {
        {cos(radian), -sin(radian), 0},
        {sin(radian), cos(radian), 0},
        {0, 0, 1}
    };
    float T_MATRIX[3][3] = {
     {1, 0, pivot.x},
     {0, 1, pivot.y},
     {0, 0, 1}
    };
    float temp[3][3];
    multiplyMatrices(ROTATION, IT_MATRIX, temp);
    float op[3][3];
    multiplyMatrices(T_MATRIX, temp, op);
    float obj[3][3] = {
        {p1.x, p2.x, p3.x},
        {p1.y, p2.y, p3.y},
        {1, 1, 1}
    };
    float result[3][3];
    multiplyMatrices(op, obj, result);
    p1.x = result[0][0];   p1.y = result[1][0];
    p2.x = result[0][1];   p2.y = result[1][1];
    p3.x = result[0][2];   p3.y = result[1][2];
    construct(p1, p2, p3);
    getch();
    closegraph();
}
//perfect triangle coordinates
// 100 100
// 50 150
// 150 150
//pivot point
// 150 150
//angle
// 45