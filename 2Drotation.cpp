#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	
    int gd=DETECT,gm;
    int x1, x2, y1, y2,x3,y3;
    double s,c,A;
    initgraph(&gd, &gm, (char *)"");

    
    printf("Rotation of triangle\n");
	printf("Enter coordinates of a: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter coordinates of b: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter coordinates of c: ");
	scanf("%d%d",&x3,&y3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	printf("Enter the angle through which you want to rotate: ");
	scanf("%lf",&A);
	c = cos(A*3.14/180);  
    s = sin(A*3.14/180);  
    x1 = floor(x1 * c + y1 * s);  
    y1 = floor(-x1 * s + y1 * c);  
    x2 = floor(x2 * c + y2 * s);  
    y2 = floor(-x2 * s + y2 * c);  
    x3 = floor(x3 * c + y3 * s);  
    y3 = floor(-x3 * s + y3 * c); 
    line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	    getch();
    closegraph();
}