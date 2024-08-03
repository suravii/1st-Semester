#include <stdio.h>
#include<conio.h>
union student
{
    char name[10];
    union roll_number
    {
        int roll_num;
    }r1, r2, r3;
}s1;
 
void main()
{
    union student s2, s3;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s1.r1.roll_num);
    printf("Roll Number of 1st student is: %d", s1.r1.roll_num);
    printf("\n\n");
    printf("\nEnter Roll Number: ");
    scanf("%d", &s2.r2.roll_num);
    printf("Roll Number of 2nd student is: %d", s2.r2.roll_num);
    printf("\n\n");
    printf("\nEnter 3rd Roll Number: ");
    scanf("%d", &s3.r3.roll_num);
    printf("Roll Number of 3rd student is: %d", s3.r3.roll_num);
}
