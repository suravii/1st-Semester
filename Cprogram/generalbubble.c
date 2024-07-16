#include<stdio.h>  //general
void main()
{	
	int n,i,j,temp,min;
	printf("enter size :");     
	scanf("%d",&n);
	int a[n];  //5|4|3|2|1
	printf("enter the element in the array : ");
	for(i=0;i<n;i++)   
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n-1;i++)  //pass ko lagi n=4 
		{
			 min=i;  //0 bho
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min])  //a[j]=4 || a[min]=5
				{ 
					min=j;      //=1  aba min 1 bho
				}   
			}
					temp=a[min];
					a[min]=a[i];   //a[min]=5
					a[i]=temp;
		}
				printf("sorted array is ");
				for(i=0;i<n;i++)
				printf("\n %d",a[i]);
			

}
