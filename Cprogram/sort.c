#include<stdio.h>
int main()
{int a[]={5,4,3,2,1},i,temp,j;
for(i=0;i<5;i++)
 {for(j=0;j<(5-i)-1;j++){
	if(a[j]>a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}

}
printf("sorted array is ");
for(i=0;i<5;i++)
printf("\nthe order is %d",a[i]);

}
