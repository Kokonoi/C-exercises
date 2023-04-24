
#include<stdio.h>

main()
{
 float a,zbir,sred;
 int i,n;
 printf("Koliko brojeva ce biti\n");
 scanf("%d", &n);
   for(i=1,zbir=0;i<=n;i++)
{
 printf("\n Unesi broj %d broj.\n",i);
 scanf("%f", &a);
 zbir=zbir+a;
}
 sred
 =zbir/n;
 printf("\n Aritmeticka sredina iznosi: %f\n", sred);
 getch();
}