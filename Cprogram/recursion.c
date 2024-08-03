#include<stdio.h>
int fact(int x );   //fx declare
void main()
{int num, factorial;
printf("enter the number :");
scanf("%d",&num);
factorial=fact(num);
printf("factorial of given number is %d",factorial);
}
int fact(int x)    //fx define
{int fact1=1;
if(x==0)
{return(1);}
else
{
fact1= x*fact(x-1);
return(fact1);
}
}
