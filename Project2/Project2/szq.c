#define _CRT_SECURE_NO_WARNINGS 1
#include "szq.h"



//��������Ϸ����

//��Ϸ�������̳���
void szq()
{
	int end = 1;
	do
	{
		int play = 1;
		szqMenu();
		scanf("%d", &play);
		switch (play)
		{
			case 1:
				szqStart(&play);
				break;
			case 2:
				szqEnd(&end);
				break;
			default:
				break;
		}
	} while (end);

}

//��Ϸ�˵�
void szqMenu()
{
	system("cls");
	printf("******************************\n");
	printf("******* 1:play  2:exit *******\n");
	printf("******************************\n");
	printf("����>:");
}
//��Ϸ��ʼ
void szqStart(int *play)
{
	char board[ROW][COL] = { 0 };
	IntBoard(board);
	DisplayBoard(board);
	int user = 1;
	int end = 0;
again:
	system("cls");
	printf("******************************\n");
	printf("******* 1:����ִ��  2:����ִ�� *******\n");
	printf("******************************\n");
	printf("����>:");
	scanf("%d", &user);
	if (user != 1 && user != 2)
	{
		goto again;
	}
	while (*play == 1)
	{
		if (user == 1)
		{
			//���
			playerMove(board);
		}
		else {
			user = -1;
			robootMove(board);
		}
		DisplayBoard(board);
		//�ж���Ӯ
		*play = IsWin(board);
		if (*play == 1)
		{
			user = -user;
		}
	}
	if (*play == 2)
	{
		if (user == 1)
		{
			printf("���Ӯ\n");
		}
		else {
			printf("����Ӯ\n");
		}
	}
	else if (*play == 3)
	{
		printf("ƽ����\n");
	}
	else {
		printf("�������\n");
	}

}
//��Ϸ����
void szqEnd(int *end)
{
	*end = 0;
}

//��ʼ������
void IntBoard(char board[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//�����ͼ���������ݵ�����̨
void DisplayBoard(char board[ROW][COL])
{
	system("cls");
	printf("\n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL -1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}


void playerMove(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
again:
	printf("\n");
	printf("�������������[1,1:%d,%d]>:", ROW, COL);
	scanf("%d %d", &x, &y);
	printf("%d , %d\n", x, y);

	if (x <1 || x > ROW || y < 1 || y > COL || board[x - 1][y - 1] != ' ' )
	{
		goto again;
	}
	else {
		board[x - 1][y - 1] = 'O';
	}
}

void robootMove(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("��ȴ�����ִ��...");
	Sleep(1000);
	srand((unsigned int)time(NULL));
again:
	x = rand() % ROW;
	y = rand() % COL;
	printf("%d , %d\n", x, y);
	if (board[x][y] != ' ')
	{
		goto again;
	}
	else {
		board[x][y] = 'X';
	}
}



int IsWin(char board[ROW][COL])
{
	int end = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < (COL - 2); j++)
		{
			if (board[i][j] == board[i][j +1] && board[i][j] == board[i][j + 2] && board[i][j] != ' ')
			{
				end = 1;
				break;
			}
		}
	}
	if (end == 1)
	{
		return 2;
	}
	for (int i = 0; i < (ROW - 2); i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
			{
				end = 1;
				break;
			}
		}
	}
	if (end == 1)
	{
		return 2;
	}
	for (int i = 0; i < (ROW - 2); i++)
	{
		for (int j = 0; j < (COL - 2); j++)
		{
			if (board[i][j] == board[i + 1][j +1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ')
			{
				end = 1;
				break;
			}
		}
	}
	if (end == 1)
	{
		return 2;
	}
	end = 1;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			if (board[i][j] == ' ')
			{
				end = 0;
			}
		}
	}
	if (end == 1)
	{
		return 3;
	}
	return 1;
}