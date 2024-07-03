#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <Windows.h>
#include <conio.h>
#define Up 72
#define Down 80
#define LEN sizeof(struct string)
struct string* p1, * p2, * head;
char arr1[30];
int P = 0;
struct string//创建结构体
{
	char arr[30];
	struct string* next;
};
void input()
{
	system("cls");
	printf("input the string :\n");
	int i;
	char a[30];
	gets_s(a, 29);
	head = p1 = p2 = (struct string*)malloc(LEN);

	while (a[0] != '\0')
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			p2->arr[i] = a[i];
		}
		p2->arr[i] = '\0';
		p1 = (struct string*)malloc(LEN);
		p2->next = p1;
		arr1[P++] = strlen(a);
		gets_s(a, 29);
	}
	if (a[0] == '\0')
	{
		p2->next = NULL;
	}
	system("cls");
}
void print()
{
	system("cls");
	printf("output the string :\n");
	p2 = head;
	while (1)//输出数组
	{
		if ((p2->next) == NULL)
			break;
		printf("%s", p2->arr);
		printf("\n");
		p2 = p2->next;

	}
	Sleep(2000);
	system("cls");
}
void check()
{
	system("cls");
	printf("the string to be seek :\n");
	char a[30];
	gets_s(a, 29);
	p2 = head;
	while (1)
	{
		if (strcmp(p2->arr, a) == 0)
		{
			printf("%s", a);
			goto tiao;
		}
		p2 = p2->next;
		if ((p2->next) == NULL)
		{
			printf("There no exist.\n");
			goto tiao;
		}
	}
tiao:
	Sleep(2000);
	system("cls");

}
void save()
{
	system("cls");
	printf("save the string in the file.\n");
	FILE* p;
	p = fopen("data", "w");
	p2 = head;
	while (1)
	{
		int i = 0;
		while (1)
		{
			fputc(p2->arr[i++], p);
			if (p2->arr[i] == '\0')
				break;
		}
		fputc('\n', p);
		p2 = p2->next;
		if (p2->next == NULL)
			break;
	}
	fclose(p);
	Sleep(2000);
	system("cls");
}
void read()
{
	system("cls");
	printf("read the data you save.\n");
	int i = 0;
	FILE* p;
	p = fopen("data", "r");
	char a[30];
	while (arr1[i] != '\0')
	{
		fgets(a, arr1[i++] + 2, p);
		strcpy(p2->arr, a);
		p1 = (struct string*)malloc(LEN);
		p2->next = p1;
		p2 = p1;
	}
	p2->next = NULL;
	fclose(p);
	Sleep(2000);
}
void menu()
{
	printf("=========================\n");
	printf("[A]\tInput data\n");
	printf("[B]\tDisplay data\n");
	printf("[C]\tCheck data\n");
	printf("[D]\tSave data\n");
	printf("[E]\tRead data\n");
	printf("[F]\tQuit\n");
	printf("=========================\n");
	printf("Select function: ");
}
void HideCursor()
{
	HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cinfo;
	cinfo.bVisible = 0;
	cinfo.dwSize = 1;
	SetConsoleCursorInfo(fd, &cinfo);
}
int main()
{
	system("color e");
	HideCursor();
	menu();
	char a;
	while (1)
	{
		scanf("%c", &a);
		if (a == 'A' || a == 'a')
			input();
		if (a == 'B' || a == 'b')
			print();
		if (a == 'C' || a == 'c')
			check();
		if (a == 'D' || a == 'd')
			save();
		if (a == 'E' || a == 'e')
			read();
		if (a == 'F' || a == 'f')
			break;
		system("cls");
		menu();
	}
}