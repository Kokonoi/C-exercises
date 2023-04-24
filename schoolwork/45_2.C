#include<stdio.h>
long int kvadrat(int a);
main()
{
 int n;
 long int suma;
 printf("n=");
 scanf("%d", &n);
 while(n<0)
 {
  printf("Unesi broj koji je veci od 0\n");
  scanf("%d", &n);
 }
 suma=kvadrat(n);
 printf("Zbir kvadrata prvih %d brojeva je: %ld\n\n", n, suma);
 getch();
}

long int kvadrat(int a)
{
 long int zb;
 zb=a*a+kvadrat(a-1);
 return zb;
}