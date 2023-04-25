#include<stdio.h>
main()
{
 int a[100],n,i,j;
 printf("\nUnesi duzinu niza.\n");
 scanf("%d",&n);
 while(n<=0||n>100)
 {
 printf("Duzina mora biti od 1 do 100!\n");
 scanf("%d",&n);
  }
   printf("Unesi elemente niza.\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<(n-1);i++)
   for(j=i+1;i<n;j++)
  {
  register b
  if(a[i]>a[j])
  {
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  }
  }
  printf("Sortirani niz:\n");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  getch();
  }