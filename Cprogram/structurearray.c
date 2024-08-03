#include <stdio.h>      
struct book
	{
		char name[20];
		float price;
	};
int main()
{
	struct book b[3];
	int i;
	printf("enter the information for 3 books\t");
	for(i=0;i<3;i++)
	{
		printf("\nenter the name of  %d book:",i+1);
		scanf("%s",b[i].name);
		printf("\nenter the price of  %d book:",i+1);
		scanf("%f",&b[i].price);
	}
	printf("\ndetail for books");
	for(i=0;i<3;i++)
	{
		
		printf("\n The book name is : %s",b[i].name);
		printf("\n The book price is : %f",b[i].price);
	}
}

