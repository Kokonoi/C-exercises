#include <stdio.h>
#include <math.h>
#define Pi 3.14;

main()
{

 struct Lopta
  {
    float pp;
    float pov;
    float zap;
  };
 struct Lopta podaci;

 printf("Unesi poluprecnik\n");
 scanf("%f", &podaci.pp);

 podaci.pov=4*3.14*pow(podaci.pp, 2);
 podaci.zap=4/3*3.14*pow(podaci.pp, 3);

 printf("Povrsina: %f, zapremina: %f\n", podaci.pov, podaci.zap);
 getch();

}