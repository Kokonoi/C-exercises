#include <stdio.h>
#include <string.h>

main()
{
 struct Ucenik
  {
   char ime[24];
   char grad[12];
   char razred[12];
   char uspeh[12];
  };
 struct Ucenik djak;

 printf("Unesi ime i prezime ucenika:\n");
 gets(djak.ime);

 printf("Unesi mesto stanovanja: \n");
 gets(djak.grad);

 printf("Unesi razred: \n");
 gets(djak.razred);

 printf("Unesi uspeh ucenika: \n");
 gets(djak.uspeh);

 printf("%s, %s, %s, %s uspeh\n", djak.ime, djak.grad,
 djak.razred, djak.uspeh);
 getch();
}