#include<stdio.h>          //type3
int addition();    //function declare
void main()  
{
int sum;
sum=addition();
printf("sum=%d",sum);
}
int addition()	
{ int a,b,z;
 printf("\nenter 2 number : ");
 scanf("%d%d",&a,&b);
 z= a+b;
 return(z);
}

