#include <stdio.h>
#include <ctype.h>

main()
{
 int brojV=0, brojM=0, brojC=0;
 char tekst;
 printf("Unesi tekst\n");
 while ((tekst=getchar())!= EOF){
  brojV+=isupper(tekst)!=0;
  brojM+=islower(tekst)!=0;
  brojC+=isdigit(tekst)!=0;
  }
 printf(" Velika slova: %d\n Mala slova: %d\n Broj karaktera: %d\n", brojV,
 brojM, brojC);
 getch();

 }








