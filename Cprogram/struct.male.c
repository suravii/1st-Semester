#include<stdio.h>
#define N 10
struct student
	{

	int roll;
	char name[20];
	int grade;
	char gender;
	int age;
	};
void main()
{
struct student s[N];
char option;
char choice='y';
int i;
printf("Menu Driven Program");
printf("\n Enter 1 for inputting student information");
printf("\n Enter 2 to display all male students");
printf("\n Enter 3 for exit");
while(choice!='n')
{
printf("\n Enter your option:\t");
scanf(" %c", &option);
switch(option)
	{
	case '1':
		printf("\n Enter info about %d students", N);
		for(i=0;i<N;i++)
			{
			printf("\n Info. about student%d",i+1);
			printf("\n Roll:\t");
			scanf("%d", &s[i].roll);
			printf("\n Name:\t");
			scanf("%s", s[i].name);
			printf("\n Grade:\t");
			scanf("%d", &s[i].grade);
			printf("\n Gender(M/F):\t");
			scanf(" %c", s[i].gender);
			printf("\n Age:\t");
			scanf("%d", &s[i].age);
			}
			break;

	case '2':
			printf("\nList of Male Students");
			for(i=0;i<N;i++)
				{
				if(s[i].gender=='M')
				printf("\n%s\n",s[i].name);
				}
			break;
	case '3':
			exit(0);
	default:
			printf("Invalid Option!!!");
	}
	printf("Do you want to continue?(y/n)");
	scanf(" %c", &choice);
}
getch();
}

