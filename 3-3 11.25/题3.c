#include<stdio.h>
int main()
{
	int n = 30, i = 0, sum = 0;
	int ADD(int x);
	for (i = 1; i <= n; i++)
	{
		sum = ADD(i);
		printf("1+2+...+%d=%d\n", i, sum);
	}
}
int ADD(int x)
{
	static int a = 0;//�þ�̬����a����ÿ��a��ֵ������
	a += x;
	return(a);
}