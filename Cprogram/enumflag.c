#include <stdio.h>
enum flag
{
	Bold=1, Italic =2, Underline =4
};
int main()
{
	int my_flag = Bold | Underline;
	printf("%d",my_flag);
}
