#include<stdio.h>
void main()
{
	int n,i,count;
	int sum=0;
	printf("enter n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++,count+=2)
	sum=sum+count;
	printf("\nthe sum is :\t%d",sum);
}

