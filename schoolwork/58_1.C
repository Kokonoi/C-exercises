#include <stdio.h>
main()
{
 float a[30];
 int i,j,n;

 printf("\nUnesi duzinu niza: \n");
 scanf("%d", &n);
 while(n<=0||n>30)
 {
  printf("Duzina mora biti izmedju 1 i 30! \n");
  scanf("%d", &n);
 }
 printf("Unesi elemente niza: \n");
 for(i=0; i<n; i++)
  scanf("%f", &a[i]);

 for(i=0; i<(n-1); i++)
  for(j=i+1; j<n; j++)
  {
  register pom;
  if(a[i]>a[j])
   {
   pom = a[i];
   a[i] = a[j];
   a[j] = pom;
   }
  }
 printf("uredjen niz \n");
  for(i=0; i<n; i++)
  printf("%2f   ",a[i]);
  getch();

}