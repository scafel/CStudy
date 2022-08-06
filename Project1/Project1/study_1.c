#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


void printVar()
{
	char a1 = 'a';
	short a = 1;
	int a2 = 10;
	long a3 = 10;
	long long a4 = 10;
	float a5 = 1.0;
	double a6 = 1.0;



	printf("%c\n", a1);
	printf("%d\n", a2);
	printf("%d\n", a3);
	printf("%d\n", a4);
	printf("%f\n", a5);
	printf("%lf\n", a6);
}


void checkSizeOf()
{
	printf("char length = %d\n", sizeof(char));
	printf("short length = %d\n", sizeof(short));
	printf("int length = %d\n", sizeof(int));
	printf("long length = %d\n", sizeof(long));
	printf("long long length = %d\n", sizeof(long long));
	printf("float length = %d\n", sizeof(float));
	printf("double length = %d\n", sizeof(double));
}


void testScanf()
{
	int s1 = 0;
	int s2 = 0;
	scanf("%d%d", &s1, &s2);

	printf("%d %d", s1, s2);
}