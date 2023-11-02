#include <graphics.h> 
#include <stdlib.h> 
#include <stdio.h> 
//#include <conio.h> 
#include<math.h> 
void main() 
{ 
            int gm; 
            int gd=DETECT; 
            int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt;                     
            printf("\t Program for basic transactions"); 
            printf("\n\t Enter the points of triangle"); 
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);          
 printf("\n Enter the translation factor"); 
            scanf("%d%d",&xt,&yt); 
  initgraph(&gd,&gm,"");   
  line(x1,y1,x2,y2); 
            line(x2,y2,x3,y3); 
            line(x3,y3,x1,y1); 
            nx1=x1+xt; 
            ny1=y1+yt; 
            nx2=x2+xt; 
            ny2=y2+yt; 
            nx3=x3+xt; 
            ny3=y3+yt; 
            line(nx1,ny1,nx2,ny2); 
            line(nx2,ny2,nx3,ny3); 
            line(nx3,ny3,nx1,ny1);  
 delay(50000); 
 closegraph(); 
} 