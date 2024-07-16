#include<stdio.h>  
   
  
int main()  
{  
    int a[25];
	int i, pos = 0, neg = 0, even = 0, odd = 0;  
    printf("Enter 25 integer numbers\t");  
    for(i = 0; i<=24; i++)  
    {  
        scanf("%d", &a[i]);  
         if(a[i] > 0)  
            pos++;  
        else  
            neg++;  
  
  
          
        
         if(a[i] % 2 == 0)  
            even++;  
        else  
            odd++;  
    }  
  
    printf("\nPositive: %d\n", pos);  
    printf("Negative: %d\n", neg);  
    printf("Even: %d\n", even);  
    printf("Odd: %d\n", odd);  
     
  
    return 0;  
}  
