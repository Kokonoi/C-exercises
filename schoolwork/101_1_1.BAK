
#include<graphics.h>
#include<stdio.h>
void main()
{
 int x1,y1,x2,y2,a,b;
 int drv=DETECT,mod;
 initgraph(&drv,&mod,"C:\\turboc3\\bgi");
 printf("\nUnesi koordinate pocetne i krajnje tacke duzi.\n");
 scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
 printf("Unesi koordinate tacke.\n");
 scanf("%d %d",&a, &b);
 setcolor(LIGHTGREEN);
 setlinestyle(DASHED_LINE,1,1);
 line(x1,y1,x2,y2);
 putpixel(a,b,YELLOW);
 getch();
 closegraph();
}