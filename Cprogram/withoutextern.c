#include<stdio.h>       
void function()
{  int y;
y=y+1;
printf("%d",y);
}
void main()
{ 
 int y;      /*note: you have to use extern keyword*/
y=100;
function();
}
int y; //global variable 
