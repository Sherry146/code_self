#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100] = { 0 };
	gets_s(a);//��gets_s����������пո���ַ���
	void CUT(char x[]);
	CUT(a);
	printf("%s\n", a);
}
void CUT(char x[100])//���ո�ȥ���ĺ���
{
	int i, j;
	for (i = j = 0; x[i] != '\0'; i++)
		if (x[i] != ' ')//��Ϊ�ո񣬺�һ��ֵ�滻ǰһ��ֵ
			x[j++] = x[i];
	x[j] = '\0';
}