#include<stdio.h>
#include<string.h>
void main()
{
	char name[20]="suravi shrestha";
	printf("%15s\n",name);  
	printf("%8s\n",name);
	printf("%15.6s\n",name);
	printf("%15.0s\n",name);
	printf("%-15.7s\n",name);
	printf("% .s\n",name);
	printf("%s",name);
	printf("\n%*.*s\n",15,3,name);
}

