#include<stdio.h>   addition till n
void main()
{
	int n,i;
	int sum=0;
	printf("enter n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d  ",i);
	sum=sum+i;
	printf("\nthe sum is :\t%d",sum);
}
