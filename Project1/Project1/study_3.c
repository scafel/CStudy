#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

enum Sex { MALE, FAMALE, SU };

struct Houman
{
	int age;
	int sex;
	char name[10];
};

void testYSF()
{

	int a = 10;
	int b = --a;
	printf("a=%d , b=%d \n", a, b); //9 , 9
	int c = a--;
	printf("a=%d , c=%d \n", a, c); // 8 , 9
	int d = ++a;
	printf("a=%d , d=%d \n", a, d); // 9 , 9
	int e = a++;
	printf("a=%d , e=%d \n", a, e); // 10 , 9

}

int Add(int a, int b)
{
	return a + b;
}


void testP()
{
	int a = 10;
	int * p = &a;
	printf("%p\n", p);

	printf("%d\n", sizeof(p));
}


void testStruct()
{
	struct Houman m = { 10 , MALE , "ÕÅÈý" };
	printf("%s \n" , m.name);
	printf("%d \n", m.age);
	printf("%d \n", m.sex);
	struct Houman* m1 = &m;
	printf("%d\n", m1->age);

}