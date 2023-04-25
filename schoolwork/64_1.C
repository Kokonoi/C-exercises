#include<stdio.h>
main()
{
 int a[30][30],b[30][30],i,j,n,k,m;
 printf("Unesi broj redova.\n");
 scanf("%d",&n);
 printf("Unesi broj kolona.\n");
 scanf("%d",&m);
 printf("Unesi matricu a.\n");
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  scanf("%d",&a[i][j]);
 printf("Unesi koeficijent k.\n");
 scanf("%d",&k);
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  b[i][j]=k * a[i][j];

  for(i=0;i<m;i++)
  {
   for(j=0;j<m;j++)
   printf("%6d",b[i][j]);
   printf("\n");
   }
   getch();
   }