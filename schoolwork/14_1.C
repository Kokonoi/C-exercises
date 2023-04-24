
#include<stdio.h>
#include<math.h>
main() 
   {
	int x, y, rezultat;
    printf("\nPrvi broj: "); 
    scanf("%d", &x);
    printf("\nDrugi broj: ");
    scanf("%d", &y);
    rezultat = x % y;
	printf("Ostatak od ova dva broja je = %d\n", rezultat);
}