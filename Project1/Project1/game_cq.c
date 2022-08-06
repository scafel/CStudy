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
		printf("请输入数字\n");
		scanf("%d", &a);

		if (a > b) {
			printf("输入的数字大了\n");
		}
		else if (a < b) {
			printf("输入的数字小了\n");
		}
		else {
			printf("输入的数字对了\n");
			c = 0;
		}
	}

}
