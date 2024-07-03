#include<stdio.h>
int main()
{
	int a[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int* p1; int** p2; int(*p3)[5]; int* p4[4];
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			p1 = &a[i][j];//存放每个元素地址
			p3 = &a[i];//存放每行元素地址
			p4[i] = *(a + i);//存放每行元素地址
			p2 = p4 + i;//存放每行元素地址
			printf("%d %d %d %d\n", *p1, p2[0][j], (*p3)[j], p4[i][j]);
		}
		printf("\n");
	}
}