#include<stdio.h>
#include<stdlib.h>
main()
{
 int i;
 FILE *d;
 d=fopen("neparni","w");
 if(d==NULL)
 {
 printf("Greska pri otvaranju datoteke podaci.\n");
 exit(1);
 }
 for(i=1;i<16;i++)
  if(i%2!=0)
    fprintf(d,"%d\n",i);

 fclose(d);
 d=fopen("neparni","r");
 if(d==NULL)
 {
 printf("Greska pri otvaranju datoteke podaci.\n");
 exit(1);
 }
 while(1)
 {
  int br;
  fscanf(d,"%d",&br);
  if(feof(d))
     break;
  printf("Procitano: %d\n:",br);
  }
  fclose(d);
  getch();
 }