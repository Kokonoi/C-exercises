#include <stdio.h>
#include <ctype.h>

main()
{

 char tekst;
 int broj=0;
 printf("Napisi tekst: \n");

 while ((tekst=getchar()) != EOF)
  {
   broj+=isupper(tekst)!=0;
  }

 printf("Broj velikih slova je: %d \n", broj);
 getch();



}