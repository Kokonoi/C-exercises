#include <stdio.h>
main()
{
	int x,y,z;
	printf("Unesite prvi broj: \n");
	scanf("%d", &x);

	printf("Unesite drugi broj: \n");
	scanf("%d", &y);

	printf("Unesite treci broj: \n");
	scanf("%d", &z);

	if (x<y & x<z)
		printf("Broj %d je najmanji \n", x);
		else if (y<x & y<z)
			printf("Broj %d je najmanji \n", y);
		else
			printf("Broj %d je najmanji \n", z);
			getch();
}