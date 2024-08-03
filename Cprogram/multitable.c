#include<stdio.h> 
void main()
{
   int i,j;
   for(i=1;i<=10;i++)
   {
   	for(j=2;j<=10;j++)
   	{
	   printf("%d*%d =%d\t",i,j, i*j);
	   if(j=+2)
	   break;
	}
   printf("\n");
   }
}
