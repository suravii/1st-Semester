#include <stdio.h>
void main() {
	int i,j,k;
	for (i=1;i<=5;i++) // i=row
	{
		for(j=1;j<=(5-i);j++)   //total no. of row(5)- row no.=space  space=j
		{
		   printf(" ");	
		}
	 for (k=1;k<=(2*i)-1;k++)   //k= symbol   [(2*row0-1]
		{
			printf("*");
		}
		printf("\n");		
	}
}

/*    *
     ***
    *****
   *******
  *********   */
