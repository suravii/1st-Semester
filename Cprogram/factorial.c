#include <stdio.h> 
void main()
{
   int num,i;
   int fact=1;
   printf("\nEnter a number whose factorial is to be calculated: ");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   fact=fact*i;
   printf("\nfactorial is :%d",fact);
}
