#include <stdio.h>
#define PI 3.14159;

float p(float r);
float v(float r);

main()
{
 float r,povrsina,zapremina;

 printf("Unesi poluprecnik lopte \n");
 scanf("%f", &r);

 povrsina=p(r);
 zapremina=v(r);

 printf("Povrsina suplje lopte je %f, a zapremina %f\n", povrsina, zapremina);
 getch();
}

float p(float r)
{
 float rezultat;
 rezultat = 4*PI*r;
 return rezultat;
};

float v(float r)
{
 float rezultat;
 razultat = 4/3*PI*r*r*r;
 return rezultat;
};
