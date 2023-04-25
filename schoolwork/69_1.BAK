#include <stdio.h>
main()
{
 int a[30][30],b[30][30],d[30][30], n, i, j;

 printf("Unesi broj redova\n");
 scanf("%d", &n);

 printf("Unesi elemente matrice a:\n");
 for(i=0; i<n; i++)
  for(j=0; j<n; j++)
   scanf("%d", a[i][j]);

 printf("Unesi elemente matrice b:\n");
 for(i=0; i<n; i++)
  for(j=0; j<n; j++)
   scanf("%d", b[i][j]);



 for(i=0; i<n; i++)
  for(j=0; j<n; j++)
  {
   d[i][j]=a[i][j]-b[i][j];
   printf("%6d", d[i][j]);
  }

 getch();
}