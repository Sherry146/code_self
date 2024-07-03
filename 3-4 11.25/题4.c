#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100] = { 0 };
	gets_s(a);//用gets_s可以输入带有空格的字符串
	void CUT(char x[]);
	CUT(a);
	printf("%s\n", a);
}
void CUT(char x[100])//将空格去掉的函数
{
	int i, j;
	for (i = j = 0; x[i] != '\0'; i++)
		if (x[i] != ' ')//若为空格，后一个值替换前一个值
			x[j++] = x[i];
	x[j] = '\0';
}