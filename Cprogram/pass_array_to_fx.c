#include <stdio.h>
#include<conio.h>
void main()
{ int a;
int num[5]={8,2,10,19,35};
printf("the content is : ");
scanf("%d",&a);
 display(num);
}
void display(int n[])
{ int i;
printf("\t %d",n[0]);
for(i=1;i<=5;i++)
{printf("%d\t",n[i]);
}
}
