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
		g = strlen(a);//��������ַ�
		if (a[0] == '\0')//������ͽ���
			break;
		for (i = 0; i < g; i++,j++)//��a���ַ�����*p
			*(pt + j) = a[i];
	}
	for (i = 0; i < j; i++)//���
		printf("%c", *(pt + i));
	printf("\n");
}