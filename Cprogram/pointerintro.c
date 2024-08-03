#include<stdio.h>
void main()
{
	int a=5;
	int *p;
	p=&a;                  //refrencing
	printf("Value of a :%u",a);
	printf("\nValue of a:%u",*p);   //derefferencing
	printf("\nValue of a :%u",*(&a));   //content of address of a
	printf("\nAddress of a:%u",p);
	printf("\nccccof p:%u",&p);
	printf("\nAddress of a:%u",&a);

}
