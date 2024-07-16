#include<stdio.h>
void main()
{
	int n1=57; //00111001
	int right_shift, left_shift;
	left_shift = n1 << 2; //0011100100
	right_shift = n1 >> 2;  //01110
	printf("left_shift = %d",left_shift);
	printf("\nright_shift = %d",right_shift);
}
