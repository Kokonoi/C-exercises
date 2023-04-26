#include<stdio.h>
#include<graphics.h>

main()
{
 int drv=DETECT, mod, r, x, y;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");

 printf("Unesi poluprecnik cveta\n");
 scanf("%d", &r);

 x=getmaxx()/2;
 y=getmaxy()/2;


 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 fillellipse(x+r,y,r,r);
 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 fillellipse(x,y+r,r,r);
 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 fillellipse(x,y-r,r,r);
 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 fillellipse(x-r,y,r,r);

 setcolor(RED);
 setfillstyle(SOLID_FILL,YELLOW);
 fillellipse(x,y,r,r);

 getch();
 closegraph();

}