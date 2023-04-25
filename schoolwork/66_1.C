#include <stdio.h>
main()
{
 int b[50][50],i,j,n,m,min,s;

 min=100000;

 printf("\nUnesi broj redova:\n");
 scanf("%d",&n);

 printf("Unesi broj kolona:\n");
 scanf("%d",&m);

 printf("Unesi elemente matrice B.\n");
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   scanf("%d",&b[i][j]);


 printf("Unesi skalar s:\n");
 scanf("%d",&s);

 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   b[i][j]=s*b[i][j];

 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {
   if(min>b[i][j])
   min = b[i][j];
  }

 printf("Najmanji element je %d", min);
 getch();
}