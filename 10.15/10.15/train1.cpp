
#include <stdio.h>

int main()
{
	int i, s = 0 ;
	for (i = 1; s != 1953; i++)
	{
		s += i;
		printf("%d\n", i);
	}
}


//int main()
//{
//	int a, b, c, max;
//	scanf_s("%d,%d,%d", &a, &b, &c); /*请输入三个数*/
//
//	// Add your code here
//	if (a > b) max = a;
//	else max = b;
//	if (max > c) max = max;
//	else max = c;
//
//	printf("max(%d,%d,%d)=%d\n", a, b, c, max);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int toes = 0;
//	int twice, cube;
//	scanf_s("%d", &toes);
//	twice = 2 * toes;
//	cube = toes * toes * toes;
//
//	printf("%d\n%d\n%d\n", toes, twice, cube);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 365;
//	int year = 0;
//	scanf_s("%d", &a);
//	year = a * b;
//	printf("%d\n",a);
//	printf("year=%d\n", year);
//
//	return 0;
//}
//int main()
//{
//	
//		printf("谢建豪\n");
//		printf("谢\n建豪\n");
//		printf("谢");
//			printf("建豪\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char arr[100] = { 0 };
//	while (arr[a] != '\n')
//	{
//		scanf("%c", &arr[a]);
//		a++;
//	}
//
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 3020;
//	b = 350;
//	printf("There were %d words and %d lines\n", a, b);
//	return 0;
//}