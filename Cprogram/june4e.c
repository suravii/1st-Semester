#include<stdio.h>    //type 4
int add(int x, int y)
{ int z;
z=x+y;
return(z);
}
void main()
{int a,b,sum;
 printf("\nenter 2 number : ");
 scanf("%d%d",&a,&b);
 sum=add(a,b);
 printf("sum =%d",sum);
}
