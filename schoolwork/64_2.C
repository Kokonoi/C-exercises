#include <stdio.h>
main()
{
 float a[100][100];
 int fs, sn, s, i, j;

 printf("\nUnesi broj redova matrice: \n");
 scanf("%d", &fs);

 printf("Unesi broj kolona matrice: \n");
 scanf("%d", &sn);

 printf("Unesi matricu: \n");
 for(i=0; i<fs; i++)
  for(j=0; j<sn; j++)
   scanf("%f", a[i][j]);

 printf("Unesi skalar S: \n");
 scanf("%d", &s);

 for(i=0; i<fs; i++)
  for(j=0; j<sn; j++)
   a[i][j] = a[i][j] * s;

 for(i=0; i<fs; i++)
  for(j=0; j<sn; j++)
  {
    printf("%5f   ", a[i][j]);
    printf("\n");
  }
 getch();
}














