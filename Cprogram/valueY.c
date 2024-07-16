#include<stdio.h>  //conditional operator
void main()
{
	int x,y;
	printf("Enter any number : ");
	scanf("%d", &x);
	y = x > 0 ? 2*x+3 : 2*x-3;    
	printf("%d", y);
}
/*if 1st condition is true exp2 is executed if false exp3 is executed*/ 
	

