#include<stdio.h>
long int faktorijel(int m);
main()
{
 int n;
 long int fa;
 printf("Unesi n.\n");
 scanf("%d",&n);
 if(n<0)
 {
 printf("Uneli ste pogresan broj.\n");
 scanf("%d",&n);
}
 fa=faktorijel(n);
 printf("%d!=ld\n",n,fa);
 getch();
 }
 long int faktorijel(int m)
 {
 long int faa;
 if(m==0)
 faa=1;
 else
 faa=m*faktorijel(m-1);
 return faa;
 }_



