#include <stdio.h>
void main()
{
	char name[3];
	float price[3];
	int page_number[3];
	int i;
	printf("Enter name,price and page number of 3 books:\n");
	for(i=0;i<3;i++)
	{
	  	scanf("%c %f %d",&name[i],&price[i],&page_number[i]);
	}
	printf("information of 3 books are : \n");
	for(i=0;i<3;i++)
	{
		printf("c %f %d",name[i],price[i],page_number[i]);
	}
}


