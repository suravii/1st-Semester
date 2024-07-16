#include <stdio.h>          //type1
void addition();    //function declare
void main()  
{printf("\nbefore  function call");
addition();      // function calling
printf("\nafter the function call");
}
void addition()	
{ int a,b,sum;
 printf("\nenter 2 number : ");
 scanf("%d%d",&a,&b);
 sum= a+b;
 printf("the sum is : %d",sum);
}
