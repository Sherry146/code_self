#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()  
{
    char a[8][18] = { {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},//定义一个大的数组存放空格
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    };
    int hang[10][100] = { {0,0,0,0,0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,6,6,6,6,6,6}, {0,1,2,3,4,5,6,6,6,6,6,6,6,6},{0,0,0,0,0,0,0,0,1,2,3,3,3,3,3,3,3,3,4,5,6,6,6,6,6,6,6,6},{0,0,0,0,0,0,0,0,1,2,3,3,3,3,3,3,3,3,4,5,6,6,6,6,6,6,6,6},{0,0,1,1,2,2,3,3,3,3,3,3,3,3,4,5,6},{0,0,0,0,0,0,0,0,1,2,3,3,3,3,3,3,3,3,4,5,6,6,6,6,6,6,6,6,},{0,0,0,0,0,0,0,0,1,2,3,3,3,3,3,3,3,3,4,4,5,5,6,6,6,6,6,6,6,6},{0,0,0,0,0,0,0,0,1,2,3,4,5,6,},{0,0,0,0,0,0,0,0,1,1,2,2,3,3,3,3,3,3,3,3,4,4,5,5,6,6,6,6,6,6,6,6},{0,0,0,0,0,0,0,0,1,1,2,2,3,3,3,3,3,3,3,3,4,5,6} };
    int lie[10][100] = { {0,1,2,3,4,5,6,7,0,7,0,7,0,7,0,7,0,7,0,1,2,3,4,5,6,7}, {3,3,3,3,3,3,0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7,7,7,0,1,2,3,4,5,6,7,0,0,0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7,7,7,0,1,2,3,4,5,6,7,7,7,0,1,2,3,4,5,6,7},{0,7,0,7,0,7,0,1,2,3,4,5,6,7,7,7,7},{0,1,2,3,4,5,6,7,0,0,0,1,2,3,4,5,6,7,7,7,0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7,0,0,0,1,2,3,4,5,6,7,0,7,0,7,0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7,7,7,7,7,7,7},{0,1,2,3,4,5,6,7,0,7,0,7,0,1,2,3,4,5,6,7,0,7,0,7,0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7,0,7,0,7,0,1,2,3,4,5,6,7,7,7,7} };
    int geshu[10] = { 25 ,14,27 ,28,16,27,29,13,31,22 };//将数字0-9的坐标（行列）表示出来
    int b, c, j, k, n;
    scanf("%d", &n);
    b = n / 10 % 10; c = n % 10;
    for (j = 0; j <= geshu[b]; j++)//将十位的数字对应坐标的空格换成“*”
    {
        a[hang[b][j]][lie[b][j]] = '*';
    }
    for (j = 0; j <= geshu[c]; j++)//将个位的数字对应坐标的空格换成“*”
    {
        a[hang[c][j]][lie[c][j] + 10] = '*';
    }
    for (j = 0; j < 8; j++)//打印出字符串
    {
        for (k = 0; k < 18; k++)
        {
            printf("%c", a[j][k]);
        }
        printf("\n");
    }
}