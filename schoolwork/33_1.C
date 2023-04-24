#include <stdio.h>
#include <math.h>

main()
{
 int a,b,i;
 float x,y;
 printf("\nUnesi brojeve a i b\n");
 scanf("%d%d", &a, &b);
 while(b<a)
 {
  printf("Prvi broj mora biti veci od drugog,\nmolimo Vas unesite brojeve ponovo\n");
  scanf("%d%d",&a,&b);
  i++;
 }

 for(x=a;x<=b;x=x+0.5)
  if(x<=0)
   if(x!=-5)
   {
   y=(x-3)/(x+5);
   printf("x=%12.4f, y=%12.4f \n", x,y);
  }
  else
   if(x!=4)
   {
   y=(x+2)/(x-4);
   printf("x=%12.4f, y=%12.4f \n", x,y);
  }
 getch();


}