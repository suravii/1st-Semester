#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1,ch2;
	printf("enter first character :");
	ch1 = getch();
	printf("\nenter second character :"); 
	ch2 = getche();
	printf("\nfirst character is :");
	putch(ch1); //equivalent to printf("%c",ch)
	printf("\nsecond character is :");
	putch(ch2);
}
