#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[300],b[200],c[100];
	scanf("%s %s %s", a, b, c);//����3�����飬�ÿո����
	strcat(b, c);//����b��c�����b��
	strcat(a, b);//����a��b�����a��
	printf("%s", a);
}