//wap that converts temp from celcius to fahrenheit
#include<stdio.h>
#include<conio.h>
void main()
{
	float centi,fah;
	printf("enter temperature in centigrade :");
	scanf("%f", &centi);
	fah=9.0/5*centi+32;
	printf("\n the temperature in fahrenheit is : %f", fah);
	getch();
}
	
