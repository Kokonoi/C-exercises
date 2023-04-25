#include <stdio.h>
void main()
{
 int a[5],b[5],i,j;
 long int uk;

 printf("Unesi niz A\n");
 for(i=0; i<5; i++)
 scanf("%d", &a[i]);

 printf("Unesi niz B\n");
 for(i=0; i<5; i++)
 scanf("%d", &b[i]);

 for(i=0; i<5; i++)
  for(j=i+1; j<5; j++)
  {
   register pom;
   if(a[i]>a[j])
   {
    pom=a[j];
    a[i]=a[j];
    a[i]=pom;
   }
  }

 for(i=0; i<5; i++)
  for(j=i+1; j<5; j++)
  {
   register pom;
   if(b[i]>b[j])
   {
    pom=b[j];
    b[i]=b[j];
    b[i]=pom;
   }
  }

 for(i=0, uk=0; i<5; i++)
 {
  uk=uk+a[i]*b[i];
 }

 printf("Zbir skalarnih proizvoda je %ld\n", uk);
 getch();

}