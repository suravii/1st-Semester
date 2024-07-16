#include <stdio.h> // if
void main()
{
   int s1,s2,s3,s4,s5,pr;
   printf("Input the five different subject : ");
   scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
   pr= (s1+s2+s3+s4+s5)/5;
   if(pr >= 60)
   printf("first division");
   if(pr >= 50 && pr<=60)
   printf("second division");
   if(pr >= 40 && pr<=50)
   printf("third division");
   if (pr<40)
   printf("fail");
   printf("\nyour percentage is: %d", pr);
   
   
   
}
