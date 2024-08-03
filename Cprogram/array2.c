#include <stdio.h>
void main()
{
int a[10],i;
printf("\n enter 10 numbers :");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);                 //array input
}
printf("entered number is :");
for(i=0;i<=9;i++)
{printf("\na[%d]=%d is locaated at\t%u",i,a[i],&a[i]);
}
}

