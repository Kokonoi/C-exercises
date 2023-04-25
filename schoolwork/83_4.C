#include <stdio.h>

main()
{
 struct Ucenik
  {
   float prosek;
   int brojuk;
   int predmet1;
   int predmet2;
   int predmet3;
   int predmet4;
   int predmet5;
   int predmet6;
};
 struct Ucenik podaci;

 printf("Unesi ocenu iz prvog predmeta \n");
 scanf("%d", &podaci.predmet1);
 printf("Unesi ocenu iz drugog predmeta \n");
 scanf("%d", &podaci.predmet2);
 printf("Unesi ocenu iz treceg predmeta \n");
 scanf("%d", &podaci.predmet3);
 printf("Unesi ocenu iz cetvrtog predmeta \n");
 scanf("%d", &podaci.predmet4);
 printf("Unesi ocenu iz petog predmeta \n");
 scanf("%d", &podaci.predmet5);
 printf("Unesi ocenu iz sestog predmeta \n");
 scanf("%d", &podaci.predmet6);

 podaci.brojuk = podaci.predmet1 +
 podaci.predmet2 + podaci.predmet3 + podaci.predmet4 +
 podaci.predmet5 + podaci.predmet6;
 podaci.prosek=podaci.brojuk/6;

 printf("Prosek ucenika je %f \n", podaci.prosek);
 getch();

}