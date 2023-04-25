#include<stdio.h>
#include<string.h>
main()
{
 struct Osoba
       {
	int god;
	char ime[25];
	char prezime[25];
       };
 struct Osoba korisnik;

 printf("Unesi godiste:\n");
 scanf("%d", &korisnik.god);
 printf("Unesi ime:\n");
 scanf("%s", korisnik.ime);
 printf("Unesi prezime:\n");
 scanf("%s", korisnik.prezime);

 strcat(korisnik.ime, " ");
 strcat(korisnik.ime, korisnik.prezime);

 printf("%s, %d\n",korisnik.ime, korisnik.god);
 getch();
}