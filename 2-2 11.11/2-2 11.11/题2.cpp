#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[4][6]={{1.1,1.2,1.3,1.4,1.5,1.6},{2.1,2.2,2.3,2.4,2.5,2.6} ,{3.1,3.2,3.3,3.4,3.5,3.6} ,{4.1,4.2,4.3,4.4,4.5,4.6} };
	int i, j, H,L,sum;
	H = 1; L = 1; sum = 1;
	for (i = 0; i < 4; i++)//输出每一列的数组
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", a[i][j]);//输出每一行的数组
		}
		printf("\n");
	}
	for(i=0;i<4;i++)//计算每一行的乘积
		for (j = 0; j < 6; j++)
		{
			H *= a[i][j];
			if (j == 5)
			{
				printf("第%d行乘积=%d\n", i + 1, H);
					H = 1;
			}
		}
	for(j=0;j<6;j++)//计算每一列的乘积
		for (i = 0; i < 4; i++)
		{
			L *= a[i][j];
			if (i == 3)
			{
				printf("第%d列乘积=%d\n", j + 1, L);
				L = 1;
			}
		}
	for(i=0;i<4;i++)//计算总乘积
		for (j = 0; j < 6; j++)
		{
			sum *= a[i][j];
		}
	printf("总乘积=%d", sum);
}