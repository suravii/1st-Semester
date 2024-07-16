#include <stdio.h>
struct student
{
	int roll_number;
	char name[20];
}s1={10,"ram"};
void main()
{
	struct student s2,s3;
	printf("\nroll number of s1: %d",s1.roll_number);
	printf("\nname of s1: %s",s1.name);
	//s2.roll_number=11;
	//s2.name ="rai";
	//printf("\nroll number of s2: %d",s2.roll_number);
	//printf("\nname of s2: %s",s2.name);
	printf("\nenter the roll number and name for s3: ");
	scanf("%d",&s3.roll_number);
	scanf("%s",s3.name);
	printf("\nroll number of s3: %d",s3.roll_number);
	printf("\nname of s3: %s",s3.name);

	
}

