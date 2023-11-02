 #include <stdio.h>
 #include <stdlib.h>
 #include <graphics.h>
 #include <math.h>
 
void bezier (int x[4], int y[4])
 {
    int gd = DETECT, gm;
    int i;
    double p;
 
    initgraph (&gd, &gm, "");
 
    for (p = 0.0; p < 1.0; p += 0.0005)
    {
 double xt = pow (1-p, 3) * x[0] + 3 * p * pow (1-p, 2) * x[1] +
    3 * pow (p, 2) * (1-p) * x[2] + pow (p, 3) * x[3];
 
double yt = pow (1-p, 3) * y[0] + 3 * p * pow (1-p, 2) * y[1] +
    3 * pow (p, 2) * (1-p) * y[2] + pow (p, 3) * y[3];
 
putpixel (xt, yt, WHITE);
    }
 
    for (i=0; i<4; i++)
 putpixel (x[i], y[i], YELLOW);
 
    getch();
    closegraph();
    return;
 }
 
void main()
 {
    int x[4], y[4];
    int i;
 
    printf ("Enter the x- and y-coordinates of the four control points.\n");
    for (i=0; i<4; i++)
 scanf ("%d%d", &x[i], &y[i]);
 
    bezier (x, y);
 } 