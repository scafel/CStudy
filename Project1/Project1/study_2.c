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
	//n1 = 11;  常量不可以进行直接修改
	int *n2 = &n1;
	*n2 = 2;
	printf("%d\n", n1); // 通过指针进行修改

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

	printf("\a)");//转义字符

	//\a	响铃(BEL)	007
	//\b	退格(BS) ，将当前位置移到前一列	008
	//\f	换页(FF)，将当前位置移到下页开头	012
	//\n	换行(LF) ，将当前位置移到下一行开头	010
	//\r	回车(CR) ，将当前位置移到本行开头	013
	//\t	水平制表(HT) （跳到下一个TAB位置）	009
	//\v	垂直制表(VT)	011
	//\'	代表一个单引号	039
	//\"	代表一个双引号字符	034
	//\	代表一个反斜线字符'''	092
	//? 代表一个问号	063
	//\0	空字符(NUL)	000
	//\ddd	1到3位八进制数所代表的任意字符	三位八进制
	//\xhh	十六进制所代表的任意字符	十六进制
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