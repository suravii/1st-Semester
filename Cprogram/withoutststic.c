#include<stdio.h>
void main()
{ increment();
increment();
increment();
increment();
}
increment()          
{ auto int i=1;
printf("\n%d",i);
i=i+1;              //value persist bhayena so increment value disappera bho
}

