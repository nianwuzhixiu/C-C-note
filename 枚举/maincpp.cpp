#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////枚举类型
//enum Sex
//{	
//	//枚举的可能取值——常量
//	MALE=2,
//	FEMALE=6,
//	SECRET=9
//};
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	printf("%d %d %d\n", RED, YELLOW, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//	/*我们可以使用#define定义常量, 为什么非要使用枚举 ? 枚举的优点 :
//		1.增加代码的可读性和可维护性
//		2.和#define定义的标识符比较枚举有类型检查, 更加严谨。
//		3.防止了命名污染(封装)
//		4.便于调试
//		5.使用方便, --次可以定义多个常量*/
//}


////共用体——联合体
//union Un
//{
//	char c;
//	char i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

int check_sys()
{
	union 
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}