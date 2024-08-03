#include<stdio.h>
void main()
{
	int a=2,b=3,c,d,f;
	a+=b;
	printf("a=%d",a);
	c=(a*=b);
	printf("\nc=%d",c);
	d=(a/=b);
	printf("\nd=%d",d);
	f=(a%=b);
	printf("\nf=%d",f);
	
}
