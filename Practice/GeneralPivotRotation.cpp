#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

int Xc = 300;
int Yc = 250;

void multiplymatrices(float mat1[3][3], float mat2[3][3], float result[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void construct(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1 + Xc, y1 + Yc, x2 + Xc, y2 + Yc);
    line(x2 + Xc, y2 + Yc, x3 + Xc, y3 + Yc);
    line(x3 + Xc, y3 + Yc, x1 + Xc, y1 + Yc);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    printf("Pivot point rotation\n");

    line(0, 250, 600, 250);
    line(300, 0, 300, 500);

    float x1, y1;
    printf("\nEnter x1 and y1:");
    scanf("%f%f", &x1, &y1);

    float x2, y2;
    printf("\nEnter x2 and y2:");
    scanf("%f%f", &x2, &y2);

    float x3, y3;
    printf("\nEnter x3 and y3:");
    scanf("%f%f", &x3, &y3);

    construct(x1, y1, x2, y2, x3, y3);

    float Xp, Yp;
    printf("\nEnter pivot points(x,y):");
    scanf("%f%f", &Xp, &Yp);

    float angle;
    printf("\nEnter the angle:");
    scanf("%f", &angle);

    float radian = angle * (M_PI / 180.0);

    float IT_Matrix[3][3] = {
        {1, 0, -Xp},
        {0, 1, -Yp},
        {0, 0, 1}};
    float Rotation[3][3] = {
        {cos(radian), -sin(radian), 0},
        {sin(radian), cos(radian), 0},
        {0, 0, 1}};
    float T_Matrix[3][3] = {
        {1, 0, Xp},
        {0, 1, Yp},
        {0, 0, 1}};

    float temp[3][3];
    multiplymatrices(Rotation, IT_Matrix, temp);
    float op[3][3];
    multiplymatrices(T_Matrix, temp, op);

    float obj[3][3] = {
        {x1, x2, x3},
        {y1, y2, y3},
        {1, 1, 1}};

    float result[3][3];
    multiplymatrices(op, obj, result);

    x1 = result[0][0];
    y1 = result[1][0];
    x2 = result[0][1];
    y2 = result[1][1];
    x3 = result[0][2];
    y3 = result[1][2];
        
    construct(x1, y1, x2, y2, x3, y3);
    getch();
    closegraph();
}