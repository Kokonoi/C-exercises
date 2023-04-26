#include <stdio.h>
#include <graphics.h>

main()
{
 int drv=DETECT,mod,r;
 initgraph(&drv,&mod, "C:\\turboc3\\bgi");

 printf("Unesi polulrecnik kruznice: \n");
 scanf("%d", &r);

 setcolor(RED);
 setfillstyle(BKSLASH_FILL, GREEN);
 fillellipse(getmaxx()/2,getmaxy()/2,r,r);

 getch();
 closegraph();
}