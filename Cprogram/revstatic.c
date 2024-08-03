int rev(int);
void main()
{int n,r;
printf("\nenter number u want to reverse :");
scanf("%d",&n);
r=rev(n);
printf("\nThe reverse number is :%d",r);
getch();
}
int rev(int num)
{static int sum=0;
int r;
if(num>0)

{
	r=num%10;
	sum=sum*10+r;
	rev(num/10);
}return sum;
}
