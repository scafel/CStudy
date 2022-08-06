#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


int taskN(int x)
{
	int f = 1;
	for (int n = 1; n <= x; n++)
	{
		f*=n;
	}
	return f;

}


int taskNI(int x)
{
	int f = 0;
	for (int n = 1; n <= x; n++)
	{
		int d = 1;
		for ( int i = 1; i <= n; i++)
		{
			d *= i;
		}
		f += d;
	}
	return f;

}



int taskSearchArr(int x , int xa[] , int s)
{
	int size = sizeof(xa) / sizeof(xa[0]);

	for (int i = 0; i < size; i++)
	{	
		if (xa[i] == x) {
			s = i;
			break;
		}
	}
	return s;
}


void taskName()
{
	char name1[] = "welcome to bit!!!!";
	char name2[] = "##################";
	int sz = strlen(name1);
	int num = 0;
	int left = 0, right = sz -1;
	while (left <= right)
	{
		name2[left] = name1[left];
		name2[right] = name1[right];
		printf("%s\n", name2);
		Sleep(500);
		left++;
		right--;
		if (left <= right)
		{
			system("cls");
		}
	}
	





}