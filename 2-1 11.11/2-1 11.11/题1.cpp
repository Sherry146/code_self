#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],i=0,j=0,k=0,t;
	scanf("%s",a);//����һ���ַ���С��200���ַ������浽����a��
	printf("\n");
	j=strlen(a);//��������a�ĳ���
	for (k = 0; k < j ; k++)//����a�ж೤��ִ�м���
		for (i = k+1; i < j ; i++)//�������е�Ԫ�شӵ�һ����ʼ����Ƚ�
		{
			if (a[k]>a[i])//����С���ַ�����ǰ��
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
		}
	printf("%s", a);
}