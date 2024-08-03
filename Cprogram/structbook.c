#include <stdio.h>
void main()
{
	struct book
	{
		char name;
		float price;
		int page_number;
	};
	struct book b1={'A',102.6,100};
	printf("\naddress of name=%u",&b1.name);
	printf("\naddress of price=%u",&b1.price);
	printf("\naddress of page_number=%u",&b1.page_number);
	printf("\nname= %c",b1.name);
	printf("\nprice = %f",b1.price);
	printf("\nno. of page_number= %d",b1.page_number);
}
