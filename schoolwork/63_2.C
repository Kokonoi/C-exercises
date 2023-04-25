#include <stdio.h>
main()
{
 float a[5][2], b[5][2], d[5][2];
 int i, j;

 printf("\nUnesi matricu A: \n");
 for(i=0; i<5; i++)
   for(j=0; j<2; j++)
     scanf("%f", &a[i][j]);

 printf("\nUnesi matricu B: \n");
 for(i=0; i<5; i++)
  for(j=0; j<2; j++)
   scanf("%f", &b[i][j]);

 for(i=0; i<5; i++)
  for(j=0; j<2; j++)
   d[i][j]=a[i][j]-b[i][j];

 for(i=0; i<5; i++)
 {
  for(j=0; j<2; j++)
    printf("%5f          ", d[i][j]);
  printf("\n");
 }

 getch();
}


















