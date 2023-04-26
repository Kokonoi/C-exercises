#include<graphics.h>
void main()
{
 int drv=DETECT,mod;
 int x,y,r;
 printf("\nUnesi poluprecnik.\n");
 scanf("%d",&r);
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;
 setcolor(RED);
 circle(x,y,r);
 setcolor(BLUE);
 line(x,y+r,x+r,y);
 line(x+r,y,x,y-r);
 line(x,y-r,x-r,y);
 line(x-r,y,(y-r)/2);
 getch();
 closegraph();
}