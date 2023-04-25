#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
 char ime[12], uspeh[12], prezime[12], nSkole[24], zajedno[60];
 printf("Unesite ime ucenika: \n");
 gets(ime);
  while(!=isupper(ime[0]))
  {
   printf("Prvo slovo imena mora biti veliko\n");
   gets(ime);
  }

 printf("Unesite prezime ucenika: \n");
 gets(prezime);
  while(!=isupper(prezime[0]))
  {
   printf("Prvo slovo prezimena mora biti veliko\n");
   gets(prezime);
  }

 printf("Unesite uspeh ucenika: \n");
 gets(uspeh);

 printf("Unesite naziv skole: \n");
 gets(nSkole);

 strcpy(zajedno, ime);
 strcat(zajedno, " ");
 strcat(zajedno, prezime);
 strcat(zajedno, ", ");
 strcat(zajedno, nSkole);
 strcat(zajedno, ", ");
 strcat(zajedno, uspeh);

 printf("Ucenik: %s\n", zajedno);
 getch();







}