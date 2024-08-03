#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,t,r,si,ci,sa,ca,di;
	printf("enter the principal :");
	scanf("%f", &p);
	printf("\nenter the time :");
	scanf("%f",&t);
	printf("\nenter the rate in percentage per annum :");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("\nsimple interest is :%.2f",si);
	ci = p*(pow(1+r/100,t)-1);
	printf("\ncompound interest is :%.2f",ci);
	sa = p + si;
	printf("\n simple amount is :%.2f", sa);
	ca = p + ci;
	printf("\n compound amount is :%.2f", ca);
	printf("\n the difference between compound amount and simple amount :%.2f",ca-sa);
}
	
