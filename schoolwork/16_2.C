#include<stdio.h>
#define Pi 3.14159

main()
{
	double r1,r2;

	printf("\nUneti poluprecnik vece kruznice: \n");
	scanf("%lf", &r1);

	printf("\nUneti poluprecnik manje kruznice: \n");
	scanf("%lf", &r2);

	printf("\nPovrsina kruznog prstena je %.3lf,\n a obim %.3lf", r1*r1*Pi-r2*r2*Pi, 2*r1*Pi+2*r2*Pi);
	getch();
}