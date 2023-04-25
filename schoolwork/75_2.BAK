#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
 char ime[12], prezime[12], mesto[24], zajed[48];

 printf("Unesi ime: \n");
 gets(ime);
 if(ime[0]!=isupper(ime[0]))
 {
  printf("Prvo slovo imena mora biti napisamo velikim slovom! \n");
  gets(ime);
 }

 printf("Unesi prezime: \n");
 gets(prezime);
 if(prezime[0]!=isupper(prezime[0]))
 {
  printf("Prvo slovo prezimena mora biti napisamo velikim slovom! \n");
  gets(prezime);
 }

 printf("Unesi mesto stanovanja: \n");
 gets(mesto);

 strcpy(zajed, ime);
 strcat(zajed, " ");
 strcat(zajed, prezime);
 strcat(zajed, ", ");
 strcat(zajed, mesto);

 printf("Ime, prezime i mesto glase: %s \n", zajed);
 getch();



}