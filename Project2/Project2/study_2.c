#define _CRT_SECURE_NO_WARNINGS 1

#include <math.h>
#include <stdio.h>
#include "study_2.h"

int isPrime(int x)
{
	int i = 2;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			break;
		}
	}
	if (i > sqrt(x))
	{
		return 1;
	}
	return 0;
}


int isLeapYear(int year)
{
	if ((year %4 == 0 && year %100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else {
		return 0;
	}
}


int arraySearch(int x, int xa[] , int size)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;
	
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (xa[mid] < x) {
			left = mid + 1;
		}
		else if(xa[mid] > x)
		{
			right = mid - 1;
		}
		else {
			break;
		}

	}
	if (left <= right)
	{
		return mid;
	}
	return -1;
}



void testPrime()
{
	int i = 1;
	int x = 0;
	do
	{
		printf("请输入一个素数>:");
		scanf("%d", &x);
		if (isPrime(x) == 1)
		{
			printf("是素数\n");
			i = 0;
		}
		else {
			printf("不是素数\n");
		}
	} while (i);
}


void testLeapYear()
{
	int i = 1;
	int x = 0;
	do
	{
		printf("请输入一个年份>:");
		scanf("%d", &x);
		if (isLeapYear(x) == 1)
		{
			printf("是闰年\n");
			i = 0;
		}
		else {
			printf("不是闰年\n");
		}
	} while (i);
}


void testArraySearch()
{
	int x = 17;
	int xa[] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(xa) / sizeof(xa[0]);
	int index = arraySearch(x ,xa , size);
	printf("下标是=%d\n", index);

}


void testSafeAdd()
{
	const int a = 10;
	int num = 1;
	SafeAdd(&num);
	printf("%d\n", num);
	SafeAdd(&num);
	printf("%d\n", num);
	SafeAdd(&num);
	printf("%d\n", num);
	SafeAdd(&num);
	printf("%d\n", num);
	SafeAdd(&num);
	printf("%d\n", num);
	SafeAdd(&num);
	printf("%d\n", num);

}


void SafeAdd(int *x)
{
	(*x)++;
}



void numberA(int n)
{
	if (n == 0) { return; }
	int l = n / 10;
	int m = n % 10;
	printf("剩余数=%d ,倒数=%d\n", l, m);
	numberA(l);
}


//int stringLength(char c[])
//{
//	int count = 0;
//	while (*c != '\0')
//	{
//		count++;
//		c++;
//	}
//	return count;
//}
int stringLength(char c[])
{
	if (*c != '\0')
	{
		//return 1 + stringLength(c++);//后加加导致传参无限错误
		return 1 + stringLength(++c);
	}
	else {
		return 0;
	}
}

void testStringLengt()
{
	char name[] = "scafel1231321321";
	int s = stringLength(name);
	printf("%d\n", s);
}

int nj(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else {
		return n * nj(n-1);
	}
}

void testNJ()
{
	int x = 0;
	x = nj(20);
	printf("%d\n", x);
}

//int fbnq(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else {
//		return fbnq(n - 1) + fbnq(n - 2);
//	}
//}
int fbnq(int n)
{
	static int pre = 0;
	static int next = 1;
	static int number = 1;
	if (n == number)
	{
		return next;
	}
	int temp = next;
	next = pre + next;
	pre = temp;
	number++;
	fbnq(n);
}

void testFBNQ()
{
	int x = 0;
	int n = 0;
	scanf("%d", &n);
	x = fbnq(n);
	printf("%d\n", x);

}


void nexl()
{
	nexl();
}

void testNCXL()
{
	nexl();
}