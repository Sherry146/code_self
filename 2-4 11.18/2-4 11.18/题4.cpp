#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0}, b[50] = {0}, c[50] = {0};
	char d, e, f, i, j, k, g, h, o;
	scanf("%s %s %s", a, b, c);//����3���ַ������ÿո����
	d = strlen(a),  e= strlen(b),  f= strlen(c);//�����ַ�������
	for (i = 0; i < d; i++)//��a�ַ����ĵ�һ���ַ���ʼ��b�ַ����ĵ�һ���Ƚ�
	{
		if(a[i]==b[0])//�ж�a�ַ����ĵ�һ���ַ���b�ַ����ĵ�һ���Ƿ����
			for (j = 0; j < e; j++)//�Ա�a�ַ����������b�ַ��������
			{
				if (a[i + j] != b[j])//��һ������Ⱦ�����
					break;
				if (j==e-1)//�Աȵ����һ����Ⱦ�ִ��
				{
					if (e < f)//c��b��
					{
						for (g = 1; g <= (d - (i + e)); g++)//����a�Ա����Ժ���ַ�
						{
							h = f - e;
							a[d - g + h] = a[d - g];//���Ա�������һλ��a�����һλ�����c��b������ĳ���
						}
						for (o = 0; o < f; o++,i++)
						{
							a[i]=c[o];//�滻
						}
					}
					if (e > f)//b��c��
					{
						for (g = 0; g < (d - (i + f)); g++)
						{
							h = e - f;
							a[i + e + g - h] = a[i + e + g];//���Ա�������һλ��ǰ����c��b�ٵĳ���
						}
						for (o = 0; o < f; o++,i++)
						{
							a[i] = c[o];
						}
					}
					if (e == f)//b��c�ȳ���ֱ���滻
					{
						for (g = 0; g < f; g++)
						{
							a[i + g] = c[g];
						}
					}
				}
			}
	}
	printf("%s\n", a);
}