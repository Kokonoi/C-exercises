#include <graphics.h>
main()
{
 int drv=DETECT,mod;
 initgraph(&drv, &mod, "C:\\turboc3\\bgi");

 putpixel(100,100,GREEN);
 putpixel(200,100,YELLOW);
 putpixel(200,200,CYAN);
 putpixel(100,200,MAGENTA);

 getch();
 closegraph();
}