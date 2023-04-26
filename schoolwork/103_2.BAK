#include <stdio.h>
#include <graphics.h>

main()
{
 int drv=DETECT,mod,rx,ry;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");

 printf("Unesi poluprecnike: \n");
 scanf("%d%d", &rx, &ry);

 setcolor(RED);
 ellipse(getmaxx()/2,getmaxy()/2,0,210,rx,ry);

 setcolor(LIGHTGREEN);
 ellipse(getmaxx()/2,getmaxy()/2,0,360,50,50);

 getch();
 closegraph();


}