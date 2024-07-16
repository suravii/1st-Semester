#include <stdio.h>
#include <conio.h>

void main()
{ int avg,sum=0;
int i;
int a[10];      //array declaration
for(i=0;i<=9;i++)
{ printf("enter the value of student %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
sum=sum+ a[i];
avg =sum/10;
printf("the average marks is %d",avg);
}
