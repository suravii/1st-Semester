#include<stdio.h>
#include"file2.c"
void fun2();
int m;
void fun1()
{ m=1;
printf("\nthis is fun1 in  file1.c when m=%d",m);
}
void main()
{printf("\nthis is main fx where m=%d",m);
fun1();
fun2();
}


