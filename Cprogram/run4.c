#include<stdio.h>
fun()
{static int i=10;   //only runs once
i++;
return i;
}
 void main()
{int x,y;   
x=fun();
y=fun();
printf("%d\t%d",x,y);
}
