#include <graphics.h>
main(void)
{
 int drv=DETECT,mod;
 initgraph(&drv, &mod, "C:\\turboc3\\bgi");

 putpixel(400,400,RED);
 putpixel(395,395,RED);
 putpixel(390,395,RED);
 putpixel(405,395,RED);
 putpixel(410,395,RED);
 putpixel(415,400,RED);
 putpixel(415,405,RED);
 putpixel(415,410,RED);
 putpixel(405,420,RED);
 putpixel(400,425,RED);
 putpixel(385,400,RED);
 putpixel(385,405,RED);
 putpixel(385,410,RED);
 putpixel(390,415,RED);
 //putpixel(415,390,RED);
 putpixel(395,420,RED);

 getch();
 closegraph();
}