#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//struct S			//λ�Ρ���������λ		��ʡ�ռ�
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//	//47bit����8*6�ֽڡ���48bit
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 5;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}
