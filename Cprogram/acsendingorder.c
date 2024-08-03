#include<stdio.h>  //general
int main()
{int n,i,j,temp;
printf("enter size :");
scanf("%d",&n);
int a[n];
printf("enter the element in the array : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

//bubble sort

for(i=0;i<n;i++){
	for(j=0;j<(n-i)-1;j++)
	{
		if(a[j]>a[j+1])  //if(a[j]>a[j+1])
		{ 	temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("sorted array is ");
for(i=0;i<n;i++)
printf("\nthe order is %d",a[i]);
}
