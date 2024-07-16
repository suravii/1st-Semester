#include<stdio.h.> 
void main()
{ int n, rev=0, r,t;
	printf("enter the number :");
	scanf("%d",&n);
	t=n;
	do 
	{
	r = n%10;
	rev = (rev*10) + r;
	n = n/10;
	}
	while(n!=0);
	if(t == rev)
	{printf("entered number is palindrom");}
	else
	{printf("entered number is not palindrom");}

}
