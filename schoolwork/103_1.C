#include <stdio.h>
#include <graphics.h>

main()
{
 int drv=DETECT,mod,x,y,r1,r2;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");

 printf("Unesite prvi poluprecnik elipse: \n");
 scanf("%d", &r1);

 printf("Unesite drugi poluprecnik elipse: \n");
 scanf("%d", &r2);

 x=getmaxx();
 y=getmaxy();

 setfillstyle(CLOSE_DOT_FILL,LIGHTGREEN);
 fillelipse(x,y,r1,r2);

 getch();
 closegraph();

}