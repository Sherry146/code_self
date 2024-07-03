#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],i=0,j=0,k=0,t;
	scanf("%s",a);//输入一个字符数小于200的字符串并存到数组a中
	printf("\n");
	j=strlen(a);//计算数组a的长度
	for (k = 0; k < j ; k++)//数组a有多长就执行几次
		for (i = k+1; i < j ; i++)//将数组中的元素从第一个开始逐个比较
		{
			if (a[k]>a[i])//将较小的字符换到前面
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
		}
	printf("%s", a);
}