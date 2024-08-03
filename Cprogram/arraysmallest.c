#include <stdio.h>
void main()
{
int smallest,i;
int a[5];
for(i=0;i<=4;i++)
{printf("enter the number:",i);
scanf("%d",&a[i]);
}
smallest =a[0];
for(i=0;i<=4;i++)
{ if(smallest>a[i])
smallest=a[i];
}
printf("\nSmallest is :%d",smallest);
}
