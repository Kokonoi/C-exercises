#include<stdio.h>
#include<math.h>
main()
{
 int n,m,i;
 float zbir;
 printf("Unesi opseg (n,m)\n");
 scanf("%d%d",&n,&m);

 for(i=n,zbir=0;i<=m;i++)
{
 if(i<=0)
  continue;

 if(i%3==0)
  continue;
 zbir+=sqrt(i);
}
 printf("%16.4f",zbir);
 getch();
}