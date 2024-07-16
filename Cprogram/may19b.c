#include <stdio.h>
void main()
{
   int n1, n2,n3;
   printf("Input the three numbers:");
   scanf("%d%d%d", &n1, &n2, &n3);
   if (n1>n2 && n1>n3)
	{printf("%d is greatest ", n1);
	}
   else if (n2>n1 && n2>n3)
   {printf("%d is greatest ", n2); 
   }
   else
   {printf("%d is greatest ", n3); 
   }
   
    
}
