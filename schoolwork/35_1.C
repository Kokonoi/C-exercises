#include <stdio.h>
main()
{
 int x, i=0, k=0;
 long int suma=0;
 printf("Unesi prvi prirodan broj: \n");
 scanf("%d", &x);
 while(x!=0)
 {
 suma+=x;
 printf("Unesi broj: \n");
 scanf("%d", &x);
 i++;
 }
 printf("Zbir je %ld, a sabriranje je odradjeno %d puta \n", suma,i);

 getch();

}