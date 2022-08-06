#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>


void gameStart();
void gameEnd(int* end);
void gameMenu();

void gameCSZ()
{
	int number = 1;
	int start = 0;
	srand((unsigned int)time(NULL));
	do
	{
		gameMenu();
		scanf("%d", &start);
		switch (start)
		{
			case 1:
				gameStart();
				break;
			case 2:
				gameEnd(&number);
				break;
			default:
				gameMenu();
				break;
		}
		
	} while (number);

}


void gameStart()
{
	int a = 0;
	int b = rand() % 10 + 1;
	int c = 1;

	while (c)
	{
		printf("请输入数字\n");
		scanf("%d", &a);

		if (a > b) {
			printf("输入的数字大了\n");
		}
		else if (a < b) {
			printf("输入的数字小了\n");
		}
		else {
			printf("输入的数字对了 , 1秒后跳转到主页面\n");
			Sleep(1000);
			c = 0;
		}
	}
}


void gameEnd(int* end)
{
	*end = 0;
}

void gameMenu()
{
	system("cls");
	printf("*****************************************\n");
	printf("*********   1:play   2:exit     *********\n");
	printf("*****************************************\n");
	printf("输入内容开始游戏:");
}