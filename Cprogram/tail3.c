#include<stdio.h>  //non tail
int fx(int n)
{
if(n==0)
return ;
else
 return (1+fx(n/2));
}
void main()
{printf("%d",fx(8));
return;
}
