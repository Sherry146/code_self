#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char* pt = (char*)malloc(1000);
	char a[100] = { 0 };
	int i, j = 0, g;
	while (1)
	{
		gets_s(a,99);
		g = strlen(a);//输入各串字符
		if (a[0] == '\0')//不输入就结束
			break;
		for (i = 0; i < g; i++,j++)//将a中字符存入*p
			*(pt + j) = a[i];
	}
	for (i = 0; i < j; i++)//输出
		printf("%c", *(pt + i));
	printf("\n");
}