#include<stdio.h>
void fx(int n)
{	if(n==0)
	return;
	else
	printf("%d\t",n);
	return fx(n-1);
}
void main()
{fx(3);
return ;
}

