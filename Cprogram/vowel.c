#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	int lowercase_vowel, uppercase_vowel;
	printf("enter an alphabet: ");
	scanf("%c", &c);
	lowercase_vowel=(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u');
	uppercase_vowel=(c=='A' || c=='E'|| c=='I' || c=='O' || c=='u');
	if (lowercase_vowel || uppercase_vowel)
	printf("%c is a vowel.",c);
	else
	printf("%c is a consonant.",c);
	return 0;
		
	
}
