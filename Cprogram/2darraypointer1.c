#include<stdio.h>
void main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i,j;
	printf("array element\t\t value\t\taddress\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\na[%d][%d]\t\t\t %d\t\t%u",i,j,*(*(a+i)+j),*(a+1)+j);
		}
	}


}
