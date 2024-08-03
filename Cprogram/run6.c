#include <stdio.h>
int * larger(int *,int *);
void main()
{
int a=100,b=50;
int *p;
p=larger(&a,&b);  //function call
printf("%d",*p);
getch();
}

int *larger(int *x,int *y)
{
if(*x>*y)
	return (x);  //address of a
else
	return (y);  //address of b
}
//Note: The address returned must be the address of a variable in the calling function. It is an error to return a pointer to a local variable in the called function.
