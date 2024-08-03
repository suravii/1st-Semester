#include <stdio.h>
void main()  //calling function
{ printf("I'm in main");
	add();  //function call
	sub();
	div();
	printf("\nend line");
}
 add()
 {
 	printf("\nI'm in add");
}
sub()
{
	printf("\nI'm in sub");
}
div()
{
	printf("\nI'm in div");
}
