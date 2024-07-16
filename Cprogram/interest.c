#include<stdio.h>
int main()

{
long double p,t,r,si;
printf("enter the long double p,t,r :");
scanf("%Lf%Lf%Lf",&p,&t,&r);
si=(p*t*r)/100;
printf("the simple interest of double is %Lf",si);
getch();
}
