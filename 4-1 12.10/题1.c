#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int* p = a;
	int i, j, t;
	printf("input 10 munbers:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", p+i);
	printf("\n");
	for(j=0;j<9;j++)//Ã°ÅÝ·¨ÅÅÐò
		for (i = 0; i < 9; i++)
			if (*(p + i) > *(p + i + 1))
			{
				t = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = t;
			}
	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n");
}