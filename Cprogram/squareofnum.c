#include<stdio.h> //1+2^2+3^2+....
void main()
{
	int n, sum=0, i;
	printf("enter number: \t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
	}
	printf("\nthe sum is :\t%d", sum);
}
