#include <stdio.h>
#include <math.h>

void main()
{
 int i,n;
 long int suma, kvad;

 printf("Unesi broj: \n");
 scanf("%d", &n);

 for(i=1, suma=0; i<=n; i++)
 {
  kvad=pow(i,2);
  suma+=kvad;
 }

 printf("Zbir kvadrata brojeva je: %ld \n", suma);
 getch();

}