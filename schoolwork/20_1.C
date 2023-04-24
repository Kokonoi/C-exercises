#include<stdio.h>
#include<math.h>

main()
{
float a,b,c,d;
printf("Unesi prvi realan broj:\n");
scanf("%f",&a);
printf("Unesi drugi realan broj:\n");
scanf("%f",&b);
if(a+b<300)
{
c=pow(a,3);
d=pow(b,3);
printf("Kubovi brojeva su: %f %f\n",c,d);
}
printf("Kraj programa");
getch();
}

