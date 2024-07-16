#include<stdio.h>
#include<stdio.h>
int main()
{
int n,i,j,temp,min;
	printf("enter size :");     
	scanf("%d",&n);

	
int a[n];
	printf("enter the element in the array : ");
	for(i=0;i<n;i++)   
	{
		scanf("%d",&a[i]);
	}
 bubble_sort(a,n);
 printf("sorted array is : ");
 for(i=0;i<n;i++)
  {
  	printf("%d\t",a[i]);
  }
 
}
void bubble_sort(int a[], int n)
{int i,j,temp,min=1;
for(i=0;i<n;i++)
	{	for(j=i+1;j<n;j++)
		{	if(a[j]>a[min])
			{ 	min=j;
			}
		} temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
