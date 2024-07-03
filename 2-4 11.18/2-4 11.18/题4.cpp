#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0}, b[50] = {0}, c[50] = {0};
	char d, e, f, i, j, k, g, h, o;
	scanf("%s %s %s", a, b, c);//输入3个字符串，用空格隔开
	d = strlen(a),  e= strlen(b),  f= strlen(c);//计算字符串长度
	for (i = 0; i < d; i++)//从a字符串的第一个字符开始与b字符串的第一个比较
	{
		if(a[i]==b[0])//判断a字符串的第一个字符与b字符串的第一个是否相等
			for (j = 0; j < e; j++)//对比a字符串后面的与b字符串后面的
			{
				if (a[i + j] != b[j])//有一个不相等就跳出
					break;
				if (j==e-1)//对比到最后一个相等就执行
				{
					if (e < f)//c比b长
					{
						for (g = 1; g <= (d - (i + e)); g++)//操作a对比完以后的字符
						{
							h = f - e;
							a[d - g + h] = a[d - g];//将对比完的最后一位从a的最后一位向后移c比b多出来的长度
						}
						for (o = 0; o < f; o++,i++)
						{
							a[i]=c[o];//替换
						}
					}
					if (e > f)//b比c长
					{
						for (g = 0; g < (d - (i + f)); g++)
						{
							h = e - f;
							a[i + e + g - h] = a[i + e + g];//将对比完的最后一位向前缩进c比b少的长度
						}
						for (o = 0; o < f; o++,i++)
						{
							a[i] = c[o];
						}
					}
					if (e == f)//b与c等长，直接替换
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