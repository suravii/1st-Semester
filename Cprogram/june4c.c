#include<stdio.h>          //type2
void add(int, int);    //function declare
void main()  
{
int a,b;
printf("Enter 2 number : ");
 scanf("%d%d",&a,&b);
 add(a,b);
 //printf("sum = %d",sum);
}
void add(int x, int y)	
{ int z;
z=x+y;
printf("the sum of number is: %d ",z);

}
