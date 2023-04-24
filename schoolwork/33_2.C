#include <stdio.h>
#include <math.h>

main()
{
 int n,m,i, k=0;
 long int suma;
 printf("Uneti potrebne brojeve n i m: \n");
 scanf("%d%d",&n,&m);
 while(m<=n)
 {
 printf("Uneli ste pogresnje brojeve, prvi broj mora biti manji od drugog\n");
 scanf("%d%d",&n,&m);
 k++;
 }

 for(i=n, suma=0; i<=m; i++)
 {
  if(i%2!=0)
  suma+=pow(i,3);
 }
 printf("Suma kubova u intervali od %d i %d je %ld, a broj unosa je %d",n,m,suma,k);
 getch();
}