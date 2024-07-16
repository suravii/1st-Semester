#include <stdio.h> 
void main()
{
int p,t,count;
float r,si;
count =1;
while(count<=4)
{printf("\nenter value of p,t,r : ");
scanf("%d%d%f",&p,&t,&r);
si=(p*t*r)/100;
printf("simple interest is : RS.%f",si);
count=count+1;
count++;

}



}
