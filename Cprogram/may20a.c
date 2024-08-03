#include <stdio.h>
void main()
{
 char ch;
 printf("Enter a character:  ");
 scanf(" %c", &ch);
  printf("ASCII value of %c = %d", ch, ch);
 if (ch>=65 && ch<=92)
 { printf("\nupper character : \n");
 for(ch = 'A';ch<= 'Z';ch++)
 {printf(" %c", ch);}
 }
 else if (ch>=92 && ch<=122)
 
 {printf("\nlower character : \n");
 for(ch = 'a';ch<= 'z';ch++)
 {printf(" %c", ch);}
 }
 else if(ch>=48 && ch<=57)
 {printf("\ndigit : %c", ch);
 }





}
