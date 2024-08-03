#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char buffer[5];
	int total=0,sum=0,i;
	float avg;
	fp=fopen("c:\\cprogram\\average.txt","r");
	if(fp==NULL)
	{
		
		printf("error");
		exit(1);
	}
	while(fgets(buffer,5,fp)!=NULL)
	{
		sum+= buffer[i];
		total++;
	}
	avg=sum/total;
	printf("avg: %.2f\n",avg);
	fclose(fp);
	return 0;
	
	
}
