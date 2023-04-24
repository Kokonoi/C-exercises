#include<stdio.h>
#include<math.h>

#define Pi 3.14159
#define K -2.56

main()
{
 float a,p;
 printf("Unesi realan broj:\n");
 scanf("%f" ,&a);
 if(a<0)
 {
  a=a*K;
  p=a*a*Pi;
  printf("Povrsina kruga je %f\n" ,p);
 }
 printf("Kraj programa");
 getch();
 }