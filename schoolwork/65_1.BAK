#include <stdio.h>
main()
{
 int b[50][50],i,j,n,m,max;

 max=0;

 printf("Unesi broj redova:\n");
 scanf("%d",&n);

 printf("Unesi broj kolona:\n");
 scanf("%d",&m);

 printf("Unesi elemente matrice B.\n");
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   scanf("%d",&b[i][j]);

 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {
   if(max<b[i][j])
   max = b[i][j];
  }

 printf("Najveci element je %d", max);
 getch();
}
