#include<stdio.h> 
#include<stdlib.h> 
#include<graphics.h> 
int main(void) 
{ 
int gd=DETECT,gm; 
int i,x,y,x1,x2,y1,y2,dy,dx,length,P0; 
printf("enter the Starting Coordinates of line"); 
scanf("%d%d",&x1,&y1); 
printf("enter the Ending Coordinates of line"); 
scanf("%d%d",&x2,&y2); 
initgraph(&gd,&gm," "); 
dx=abs(x2-x1); 
dy=abs(y2-y1); 
if(dx>dy) 
length=dx; 
else 
length=dy; 
putpixel(x1,y1,2); 
x=x1; 
y=y1; 
P0=2*dy-dx; 
for(i=1;i<=length;i++) 
{ 
if(P0<0) 
{ 
x=x+1; 
y=y+0; 
if(i%2==0) 
continue; 
else 
putpixel(x,y,2); 
P0=P0+2*dy; 
} 
else 
{ 
x=x+1; 
y=y+1; 
if(i%2==0) 
continue; 
else 
putpixel(x,y,2); 
P0=P0+2*dy-dx*2; 
} 
} 
