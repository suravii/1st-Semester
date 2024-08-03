  #include <stdio.h>
void main()
{
   int n1, n2,n3;
   printf("Input the three numbers:");
   scanf("%d%d%d", &n1, &n2, &n3);
	//Nested if else
	if (n1 > n2)
	{ if(n1>n3)
		{printf("n1 is greatest");}
		else
	{printf("n3 is greatest");}
}
	 else
	{ if(n2>n3)
		{ printf("n2 is greatest");}
		else
		{printf("n3 is greatest");}
	}
		
	}
