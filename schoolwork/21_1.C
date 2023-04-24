#include<stdio.h>

main()
{
 int a;
 printf("Unesi ceo broj");
 scanf("%d",&a);
 if(a>0)
 printf("Broj %d je pozitivan\n",a);
 else
 printf("Broj %d nije pozitivan\n",a);
 getch();
}