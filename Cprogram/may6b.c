#include<stdio.h>
void main()
{
	int a = 20;
	float b = 22.1234567;
	printf("%-4d",a);
	printf("\n");
	printf("%+4d",a);
	printf("\n");
	printf("%06d",a);
	printf("\n");
	printf("%d",a);
	printf("\n");
	printf("%7.3f",b);
	printf("\n%#o",a);
	printf("\n%#0x",a);
	
}
	
