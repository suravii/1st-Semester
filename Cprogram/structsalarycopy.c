#include <stdio.h>
struct employee
{
	char name[20];
	int age;
	float salary;
}   
	e1={"ram",21,5500};
	void main()
	{
		struct employee e2,e3;
		strcpy(e2.name, e1.name);
		e2.age=e1.age;
		e2.salary=e1.salary;
		e3=e2;
		printf("\nemployee name\t age\t\t salary\n");
		printf("\n%s\t\t %d \t\t%f",e1.name, e1.age, e1.salary);
		printf("\n%s\t\t %d \t\t%f",e2.name, e2.age, e2.salary);
		printf("\n%s\t\t %d \t\t%f",e3.name, e3.age, e3.salary);

	}


