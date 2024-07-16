#include<stdio.h>
void main()
{
	int day,month, year;
	printf("enter day,month,year in DD-MM-YYYY format");
	scanf("%d-%d-%d", &day, &month, &year);
	printf("\nday :%d\tyear :%d\tmonth :%d", day,month,year);
}
