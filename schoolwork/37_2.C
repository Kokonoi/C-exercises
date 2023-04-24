
#include <stdio.h>

#define PI 3,13159;

float ob(float r);
float pov(float r);

main()
{
 float r,obim,povrsina;
 printf("\nUnesi poluprecnik\n");
 scanf("%f", &r);

 obim=ob(r);
 povrsina=pov(r);

 printf("Obim je %f, a povrsina je %f\n", obim, povrsina);
 getch();
}

float ob(float r)
{
 float obi;
 obi=2*r*PI;
 return obi;
};

float pov(float r)
{
 float po;
 po=r*r*PI;
 return po;
}
