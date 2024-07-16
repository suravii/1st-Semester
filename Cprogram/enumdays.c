#include <stdio.h>
#include<conio.h>
enum week
{
	sun=1,mon=10,tue=3,wed=4,thur=5,fri=6,sat=8
};
void main()
{
	int i;
	enum week today;
//	for(i=sun;i<sun;i++)
//	{
//		today=i;
//		printf("day: %d\n",today);
//	}

	today= sun;
	printf("\nday:%d",today);
	today= mon;
	printf("\nday:%d",today);
	today= tue;
	printf("\nday:%d",today);
	today= wed;
	printf("\nday:%d",today);
	today= thur;
	printf("\nday:%d",today);
	today= fri;
	printf("\nday:%d",today);
	today= sat;
	printf("\nday:%d",today);
	
	printf("\nsize of today %d bytes",sizeof(today));
}
