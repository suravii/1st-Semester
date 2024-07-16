#include<stdio.h>       
void function()
{ extern int y;
y=y+1;
printf("%d",y);
}
void main()
{ 
extern int y;      /*note: you have to use extern keyword for global variable*/
y=100;
function();
}
int y;     //global variable 
