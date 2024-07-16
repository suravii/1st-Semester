#include<stdio.h>
void main()
{ increment();
increment();
increment();
increment();
}
increment()          
{ static int i=1;     //it is intialize to 1 only once
printf("\n%d",i);
i=i+1;              //value of i persist bho
}

