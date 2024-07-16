#include <stdio.h>
void main()
{
int largest,i;
int a[5];
for(i=0;i<=4;i++)
{printf("enter the number:",i);
scanf("%d",&a[i]);
}
largest =a[0];
for(i=0;i<=4;i++)
{ if(largest<a[i])
largest=a[i];
}
printf("\nlargest is :%d",largest);
}
