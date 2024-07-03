#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[300],b[200],c[100];
	scanf("%s %s %s", a, b, c);//输入3个数组，用空格隔开
	strcat(b, c);//连接b和c后存在b处
	strcat(a, b);//连接a和b后存在a处
	printf("%s", a);
}