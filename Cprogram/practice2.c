#include<stdio.h>
void main()
{
	FILE *fp;
	char a[10];
	int i,qt,rate;
	fp=fopen("c:\\cprogram\\su.txt","w");
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
	for(i=0;i<3;i++)
	{
		printf("enter name , qt and rate\t");
		scanf("%s",&a);
		scanf("%d%d",&qt,&rate);
		fprintf(fp,"%s\t%d\t%d\n",a,qt,rate);
}
	fclose(fp);
	getch();
}
