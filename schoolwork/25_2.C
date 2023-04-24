#include <stdio.h>
main()
{
	int a,n,i=1,stepen=1;

	printf("Unesi broj a i stepen n: \n");
	scanf("%d%d", &a,&n);

	while(i<=n)
	{
	  stepen*=a;
	  i++;
	}
	printf("Broj na stepenu %d je %d\n", n, stepen);
	getch();
}
