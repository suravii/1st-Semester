#include<stdio.h.>    //1/2+1/4+1/6......(no 1 included)
void main()
{
	int i, num;
	float sum=0, count=1;
	printf("enter any numer 1/n: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{	if(i%2==0)
		{
		sum=sum+1/count;
		}
		count=count+1;
	}
	printf("sum is :%f",sum);
	
	
	
}
