#include<stdio.h>
int main()
{int a[]={8,9,3,2,1};
 int i;
 bubble_sort(a,5);
 printf("sorted array is : ");
 for(i=0;i<5;i++)
  {
  	printf("%d\t",a[i]);
  }
 
}
void bubble_sort(int a[], int n)
{int i,j,temp;
for(i=0;i<n;i++)
	{	for(j=0;j<(n-i)-1;j++)
		{	if(a[j]>a[j+1])
			{ 	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
