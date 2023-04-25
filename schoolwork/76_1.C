#include <stdio.h>

main()
{

 char c, tekst[100];
 int broj;
 printf("Napisi string:");
 gets(tekst);

 while ((c = getchar(c) != EOF)
  {
   if (c == "a")
    broj++;
  }
 printf("Slovo a se pojavljuje %d puta.\n", broj);
 getch();

}
