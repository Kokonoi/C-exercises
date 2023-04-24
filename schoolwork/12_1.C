#include<stdio.h>

main()
{
 int a,b,c;
 printf("Unesi prvi ceo broj: ");
 scanf("%d", &a);
 printf("Unesi drugi ceo broj: ");
 scanf("%d", &b);
 c=a+b;
 printf("Zbir brojeva %d i %d je %d\n", a,b,c);
 getch();
}