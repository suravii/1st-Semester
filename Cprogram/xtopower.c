#include<stdio.h> //x^1+x^2+x^3+....
void main()
{
	int n,x, term=1,sum=0, i;
	printf("enter n and x : \t");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		term*=x;
		sum+=term;
	}	
	printf("\nthe sum is :\t%d",sum);
	
}
