//string initialization
#include<stdio.h>
void main()
{
	char college[]={'N','A','G','A','J','U','N','A','C','O','L','L','E','G','E','\0'};
	int i=0;
	while(college[i]!='\0')
	{
		printf(" %c\t",college[i]);
		i++;
	}
}
