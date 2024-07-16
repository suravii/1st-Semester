#include<stdio.h>
int a=10;
fun1(int b)           
{printf("%d",a*b);

}
fun2()
{int a=20;                           //a++;
fun1(a);    //active mode
}
main()
{fun2();   //rest mode
}

