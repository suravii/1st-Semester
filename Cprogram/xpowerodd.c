#include<stdio.h> //x^1+x^3+x^5+....
void main()
{
	int n,x,i,a,sum=0;
	printf("enter n and x : \t");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		a=pow(x,(2*i-1));
		sum+=a;
	}	
	printf("\nthe sum is :\t%d",sum);
	
}
