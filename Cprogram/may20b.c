#include<stdio.h>
void main()
{
 char ch;
 printf("Enter a character : ");
 scanf(" %c", &ch);
  printf("ASCII value of %c = %d", ch, ch);
 if (ch>=65 && ch<=92)
 { printf("\n%c is upper character",ch);
 }
 else if (ch>=92 && ch<=122)
 {printf("\n%c is lower character",ch);
 }
 else if(ch>=48 && ch<=57)
 {printf("\ndigit : %c", ch);
 }
}
