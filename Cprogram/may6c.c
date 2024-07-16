#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter any character :");
	ch = getchar(); //holds the screen until input from keyboard
	printf("enter character is :");
	putchar(ch); //equivalent to printf("%c",ch)
}
