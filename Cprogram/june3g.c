#include <stdio.h>
int add(int a,float b); //local variable is more preffarable  
 void main()
 {
 int a;
 float b,s;
 printf("enter 2 number : ");
 scanf("%d%f",&a,&b);
 s=add(a,b);            //actual argument
 printf("addition is :%f",s);
}
int add(int x, float y)
{ int z;
z=x+y;
return(z);   //immediatly transfer to main fx | z ko value sum ma jancha
}
