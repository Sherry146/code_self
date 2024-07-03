#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int scmp(char x[], char y[]);
	char a[50] = {  }, b[50] = {  };
	scanf("%s %s", a, b);
	printf("%d\n", scmp(a, b));
}
int scmp(char x[], char y[])
{
	int c, d, e, i, j;
	c = strlen(x); d = strlen(y);
	e = (c < d ? d : c);
	for (i = 0; i < e; i++)
	{
		if (x[i] < y[i])
			return -1;
		if (x[i] > y[i])
			return 1;
		if (x[i] == y[i])
			if (i == e - 1)
				return 0;
	}
}