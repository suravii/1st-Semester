#include<stdio.h>
void fx(int n)
{	if(n==0)
	return ;
	else
	fx(n-1);
	printf("%d\t",n);
	
}
void main()
{fx(3);
return ;
}

