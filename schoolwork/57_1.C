#include <stdio.h>
main()
{
 float a[50];
 int i,j,n;

 printf("\nUnesi duzinu niza: \n");
 scanf("%d", &n);

 while(n<=0||n>50)
 {
  printf("Duzina mora biti izmedju 1 i 50 \n");
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
     pom = a[j];
     a[i] = a[j];
     a[j] = pom;
    }
  }

  printf("Uredjen niz\n");
   for(i=0; i<n; i++)
    printf("%6f     ", a[i]);
  getch();
}
