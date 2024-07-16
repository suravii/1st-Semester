#include <stdio.h>
#include<conio.h>
enum week
{
	sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
void main()
{
	enum week today;
	today=3;
	switch(today)
	{
		case sunday:
			printf("today is sunday");
			break;
		case monday:
			printf("today is monday");
			break;
		case tuesday:
			printf("today is tuesday");
			break;
		case wednesday:
			printf("today is wednesday");
			break;
		case thursday:
			printf("today is thursday");
			break;
		case friday:
			printf("today is friday");
			break;
		case saturday:
			printf("today is saturday");
			break;
	}
}
