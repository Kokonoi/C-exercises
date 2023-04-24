#include <stdio.h>

float zap (float a, float b, float c);
float pov (float a, float b, float c);

main()
{
 float a, b, c, zapremina, povrsina;
 printf("\nUnesite parametre (a,b,c)\n");
 scanf("%f%f%f", &a,&b,&c);

 zapremina=zap(a,b,c);
 povrsina=pov(a,b,c);

 printf("Povrsina je %f, a zapremina je %f\n", zapremina, povrsina);
 getch();
}

float zap(float a, float b, float c)
{
 float fzap;
 fzap = a*b*c;
 return fzap;
}

float pov(float a, float b, float c)
{
 float fpov;
 fpov = 2*(a*b+b*c+a*c);
 return fpov;
}











