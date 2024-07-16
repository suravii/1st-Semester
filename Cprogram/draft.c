#include<stdio.h>
int main()
{ int n, i,j,temp;  
int num[5];    //define array
for(i=0;i<5;i++)
{printf("enter the number %d:\n",i+1);
scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{for(j=0;j<5;j++){
	if(num[i]<num[j]){
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
	}
}
}
for(i=0;i<5;i++)
printf("\nthe order is %d",num[i]);
}
