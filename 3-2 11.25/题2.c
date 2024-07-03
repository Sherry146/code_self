#include<stdio.h>
int main()
{
	int ADD(int x);
	int a = 30;
	printf("1+2+3+...+30=%d\n", ADD(a));
}
int ADD(int x)
{
	int sum = 0;
	if (x == 1)
		sum = 1;
	else
	{
		sum = ADD(x - 1) + x;
		printf("%d\n", sum);
	}
	return(sum);
}