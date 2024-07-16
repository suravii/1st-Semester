#include<stdio.h>    //global variable    
void function();
int a =20;
void function()
{  a=40;       //updated in memory
	printf("\nvalue of a within fx:%d",a);


}    
	void main()
{	printf("\nvalue of a in main fx:%d",a);
	function();
	printf("\nvalue of a in main fx:%d",a);  //library fx
}

