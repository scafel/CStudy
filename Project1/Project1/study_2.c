#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


#define MAX 10



enum sex 
{
	MALE,
	FEMALE,
	SECRET,
};


void testConst()
{
	const int n1 = 10;
	printf("%d\n", n1);
	//n1 = 11;  ���������Խ���ֱ���޸�
	int *n2 = &n1;
	*n2 = 2;
	printf("%d\n", n1); // ͨ��ָ������޸�

	printf("%d\n", MAX);

}


void testEnum()
{
	printf("%d \n", MALE);
}



void testString()
{
	char a1[] = "abc0d";
	printf("%s \n", a1);
	char a2[] = {'a' , 'b' , '0' , 'c' ,'d' , 0};
	printf("%s \n", a2);
	printf("%d ,%d\n", strlen(a1) , strlen(a2));


	char a3[] = "abc";
	printf("%s \n", a3);
	char a4[] = { 'a' , 'b' , 'c' , 0 };
	printf("%s \n", a4);
	printf("%d ,%d\n", strlen(a3), strlen(a4));

	printf("c:\test\32\test.c");
	printf("%d \n" , strlen("c:\test\32\test.c"));
}



void testD()
{

	printf("\a)");//ת���ַ�

	//\a	����(BEL)	007
	//\b	�˸�(BS) ������ǰλ���Ƶ�ǰһ��	008
	//\f	��ҳ(FF)������ǰλ���Ƶ���ҳ��ͷ	012
	//\n	����(LF) ������ǰλ���Ƶ���һ�п�ͷ	010
	//\r	�س�(CR) ������ǰλ���Ƶ����п�ͷ	013
	//\t	ˮƽ�Ʊ�(HT) ��������һ��TABλ�ã�	009
	//\v	��ֱ�Ʊ�(VT)	011
	//\'	����һ��������	039
	//\"	����һ��˫�����ַ�	034
	//\	����һ����б���ַ�'''	092
	//? ����һ���ʺ�	063
	//\0	���ַ�(NUL)	000
	//\ddd	1��3λ�˽�����������������ַ�	��λ�˽���
	//\xhh	ʮ������������������ַ�	ʮ������
}


void testF()
{

	int a = 1;// 001 1
	int b = a << 2;//100 4
	printf("%d\n" , b);
	int c = b >> 1; // 010 2
	printf("%d\n", c);

	int d = a & b; // 001 & 100 000
	printf("%d\n", d);
	int f = a | b;// 001 | 100 101 5
	printf("%d\n", f);
	int g = a ^ b;// 001 ^ 100 101  5
	printf("%d\n", g);

}