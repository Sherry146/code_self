#include<stdio.h>
#include<string.h>
#include<math.h>
int b, c, d, i = 0, j, k;
int main()
{
	char a[100] = { 0 };
	printf("输入算式字符串:");
	gets_s(a);
	int ADD(char x[]);
	int MIN(char x[]);
	int MUL(char x[]);
	int DIV(char x[]);
	b = strlen(a);
	for (i = 0; a[i] != '\0'; i++)//检索各个字符
	{
		if (a[i] == '+')
		{
			ADD(a);
			printf("%s=%d\n", a, ADD(a));
		}
		if (a[i] == '-')
		{
			MIN(a);
			printf("%s=%d\n", a, MIN(a));
		}
		if (a[i] == '*' || a[i] == 'x' || a[i] == 'X')
		{
			MUL(a);
			printf("%s=%d\n", a, MUL(a));
		}
		if (a[i] == '/')
		{
			DIV(a);
			printf("%s=%d\n", a, DIV(a));
		}
		if (a[i] == 48 || 49 || 50 || 51 || 52 || 53 || 54 || 55 || 56 || 57)
			continue;
		else
			printf("data error\n");
	}
}
int ADD(char x[])//对应用到的加减乘除法
{
	for (j = 0; j < i; j++)
	{
		c += (x[j] - 48) * pow(10, i-j-1);
	}
	for (j = 1; j<b-i; j++)
	{
		d += (x[i + j] - 48) * pow(10, b - i - j - 1);
	}
	return(c/2+d/2);
}
int MIN(char x[])
{
	for (j = 0; j < i; j++)
	{
		c += (x[j] - 48) * pow(10, i - j - 1);
	}
	for (j = 1; j < b - i; j++)
	{
		d += (x[i + j] - 48) * pow(10, b - i - j - 1);
	}
	return(c / 2 - d / 2);
}
int MUL(char x[])
{
	for (j = 0; j < i; j++)
	{
		c += (x[j] - 48) * pow(10, i - j - 1);
	}
	for (j = 1; j < b - i; j++)
	{
		d += (x[i + j] - 48) * pow(10, b - i - j - 1);
	}
	return((c / 2) * (d / 2));
}
int DIV(char x[])
{
	for (j = 0; j < i; j++)
	{
		c += (x[j] - 48) * pow(10, i - j - 1);
	}
	for (j = 1; j < b - i; j++)
	{
		d += (x[i + j] - 48) * pow(10, b - i - j - 1);
	}
	return((c / 2) / (d / 2));
}