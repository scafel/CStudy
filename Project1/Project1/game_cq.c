#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>


void gameCQ()
{
	int a = 0; 
	int b = rand() % 11;
	int c = 1;

	while (c)
	{
		printf("����������\n");
		scanf("%d", &a);

		if (a > b) {
			printf("��������ִ���\n");
		}
		else if (a < b) {
			printf("���������С��\n");
		}
		else {
			printf("��������ֶ���\n");
			c = 0;
		}
	}

}
