#include<graphics.h>
#include<stdio.h>
main()
{
 int drv=DETECT,mod;
 float a,b,c,d,e;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");
 printf("\nUnesi uspeh ucenika.\n");
 scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
 setfillstyle(SOLID_FILL,MAGENTA);
 bar(50,400-50*a,60,400);
 setfillstyle(SOLID_FILL,GREEN);
 bar(65,400-50*b,75,400);
 setfillstyle(SOLID_FILL,RED);
 bar(80,400-50*c,90,400);
 setfillstyle(SOLID_FILL,YELLOW);
 bar(95,400-50*d,105,400);
 setfillstyle(SOLID_FILL,BLUE);
 bar(110,400-50*e,120,400);
 getch();
 closegraph();
}
