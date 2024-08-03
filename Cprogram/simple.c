#include<stdio.h>
#include<conio.h>
void main()
{
double p,t,r,si;
 short int p1,t1,r1,si1;
	long int  p2,t2,r2,si2;
	unsigned int  p3,t3,r3,si3;
	unsigned long int p4,t4,r4,si4;
	unsigned short int p5,t5,r5,si5;
	float p6,t6,r6,si6;
printf("enter the double p,t,r :");
scanf("%lf%lf%lf",&p,&t,&r);
si=(p*t*r)/100;
printf("the simple interest of double is %lf",si);

printf("\nEnter the short p1,t1,r1 :");
scanf("%hd%hd%hd", &p1,&t1,&r1);
si1=(p1*t1*r1)/100;
printf("\nthe simple interest of short int is %hd",si1);

printf("\nEnter the long p2,t2,r2 :");
scanf("%ld%ld%ld",&p2,&t2,&r2);
si2=(p2*t2*r2)/100;
printf("\nthe simple interest of long int is %ld", si2);

printf("\nEnter the unsigned p3,t3,r3 :");
scanf("%u%u%u",&p3,&t3,&r3);
si3=(p3*t3*r3)/100;
printf("\nthe simple interest of unsigned is %u",si3);

printf("\nEnter the unsigned long int p4,t4,r4 :");
scanf("%lu%lu%lu",&p4,&t4,&r4);
si4=(p4*t4*r4)/100;
printf("\nthe simple interest of unsigned long int is %lu",si4);

printf("\nEnter the unsigned short int p5,t5,r5 :");
scanf("%hu%hu%hu",&p5,&t5,&r5);
si5=(p5*t5*r5)/100;
printf("\nthe simple interest of unsigned short int is %hu",si5);

printf("enter the float p6,t6,r7 :");
scanf("%f%f%f",&p6,&t6,&r6);
si6=(p6*t6*r6)/100;
printf("\nthe simple interest of float is %f",si6);

}
