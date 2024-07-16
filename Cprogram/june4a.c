#include <stdio.h>
int add(int,int);
int subtraction(int,int);
int division(int,int);   
 void main()
 {
 int a,b,sum,sub,div;
 printf("enter 2 number : ");
 scanf("%d%d",&a,&b);
 sum=add(a,b);            
 printf("\naddition is :%d",sum);
  sub=subtraction(a,b);            
 printf("\nsubtraction is :%d",sub);
  div=division(a,b);            
 printf("\ndivision is :%d",div);
 
}
int add(int x, int y)
{ int z;
z=x+y;
return(z);   
}
int subtraction(int x, int y)
{ int z;
z=x-y;
return(z);   
}
int division(int x, int y)
{ int z;
z=x/y;
return(z);   
}
