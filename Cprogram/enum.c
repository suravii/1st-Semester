#include <stdio.h>
#include<conio.h>
enum week
{
	sun,mon,tue,wed,thur,fri,sat
};
void main()
{
	enum week today;
	today= mon;
	printf("\nday:%d",today);
	printf("\nday:%d",today+2);
	
	printf("\nsize of today %d bytes",sizeof(today));
}
