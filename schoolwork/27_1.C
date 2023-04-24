#include <stdio.h>
#include <math.h>
void main()
{
	int n,m,i,suma=0;
	printf("Unesi dva broja \n");
	scanf("%d%d",&n,&m);
	suma=0;
	i=n;
	while(i<=m)
	{
	  if(i%2==0)
	    suma+=pow(i,2);
	 i++;

	}
	printf("Zbir kvadrata izmedju dva broja je %d \n", suma);
	getch();
}