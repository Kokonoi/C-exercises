#include <graphics.h>
main(void)
{
 int drv=DETECT,mod;
 int i, j;
 initgraph(&drv, &mod, "C:\\turboc3\\bgi");

 for(i=0; i<600; i=i+10)
  for(j=0; j<800; j=j+20)
   putpixel(i,j,YELLOW);

 getch();
 closegraph();
}