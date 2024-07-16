#include <stdio.h> //if else 
void main()
{
   int s1,s2,s3,s4,s5,pr;
   printf("Input the five different subject : ");
   scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
   pr= (s1+s2+s3+s4+s5)/5;
   if(pr >= 60)
   printf("first division");
   else
   {if(pr>=50)
   printf("second division");
   else
   {if(pr>=40)
   printf("third division");
   else 
   printf("fail");
   }
   }
   printf("\nyour percentage is: %d", pr);
}
