#include<stdio.h>
void main()
{
	 	int a=5;
		printf("value of a:%d",a);
		{
			int b=20;
			printf("\nvalue of b:%d",b);
		}
	//	printf("\nvalue of b :%d",b);  //cannot run cause visibility is not  inside the scope not defined
		printf("\nvalue of a:%d",a);     
}
/* should be inside the block*/
