#include <stdio.h>
#include <math.h>
void main()
{
	int x,y,i,suma;
	printf("Unesi dva broja \n");
	scanf("%d%d",&x,&y);
	suma=1;
	i=x;
	while(i<=y)
	{
	  if(i%2!=0)
	    suma*=i;
	 i++;

	}
	printf("Proizvod neparnih brojeva izmedju %d i %d je %d \n",x,y,suma);
	getch();
}