#include <stdio.h>
void main() {
	int i,j,k;
	for (i=1;i<=5;i++)        // i=row
	{
		for(j=1;j<=(5-i);j++)           //  space=j |Total no. of row(5)- row no.=space|
		{
		   printf(" ");	
		}
	 for (k=1;k<=i;k++)             // k= symbol  
		{
			printf("*");
		}
		printf("\n");		
	}
}

/*    *
     **
    ***
   ****
  *****  */
