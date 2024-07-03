#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main(int argc, char* argv[])
{
    char a[50][50] = { '0' };
    int i, j;
    int b = 0, c;
    printf("%d\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    puts("排序：\n");
    for (i = 1; i < argc; i++)
    {
        for (j = 1; j < argc; j++)
        {
            if (a[b][0] < argv[j][0])//对字符串进行排序
            {
                strcpy(a[b], argv[j]);
                c = j;
            }
        }
        b++;
        argv[c][0] = '0';
    }
    int t = b;
    for (i = 0; i < t; i++)//输出结果
        printf("%s\n", a[i]);
}