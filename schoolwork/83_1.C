#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{

 struct Kvadar
  {
    float stranica1;
    float stranica2;
    float stranica3;
    float pov;
    float zap;
  };
 struct Kvadar podaci;

 printf("Unesi prvu stranicu A\n");
 scanf("%f", &podaci.stranica1);

 printf("Unesi drugu stranicu B\n");
 scanf("%f", &podaci.stranica2);

 printf("Unesi drugu stranicu C(visinu)\n");
 scanf("%f", &podaci.stranica3);

 podaci.pov=2*(podaci.stranica1*podaci.stranica2+
 podaci.stranica1*podaci.stranica3+podaci.stranica2+podaci.stranica3);
 podaci.zap=podaci.stranica1*podaci.stranica2*podaci.stranica3;

 printf("Povrsina: %f, zapremina: %f", podaci.pov, podaci.zap);
 getch();

}



