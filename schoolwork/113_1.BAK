#include<graphics.h>
#include<stdio.h>
void main()
{
 int drv=DETECT,mod;
 int x,y;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;
 setcolor(WHITE);
 circle(x,y,4*9);
 line(x,y,x,y+40*4);
 line(x,y,x,y-40*4);
 rectangle(x-50*4,y-40*4,x+50*4,y+40*4);
 putpixel(x-((50-11)*4),y,WHITE);
 putpixel(x+((50-11)*4),y,WHITE);
 ellipse(x-50*4,y-40*4,270,360,4,4);
 ellipse(x+50*4,y-40*4,180,270,4,4);
 ellipse(x+50*4,y+40*4,90,180,4,4);
 ellipse(x-50*4,y+40*4,0,90,4,4);
 getch();
 closegraph();
}