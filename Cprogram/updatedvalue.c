#include<stdio.h>    //global variable
 int i;     
void main()
{       
	printf("value of i :%d",i);
	increment();
	increment();
	decrement();
	decrement();
}
increment()
{i=i+1;
printf("\nvalue of i :%d",i);
}
decrement()
{i=i-1;
printf("\nvalue of i :%d",i);
}
