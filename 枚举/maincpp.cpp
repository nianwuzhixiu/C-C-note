#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////ö������
//enum Sex
//{	
//	//ö�ٵĿ���ȡֵ��������
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
//	/*���ǿ���ʹ��#define���峣��, Ϊʲô��Ҫʹ��ö�� ? ö�ٵ��ŵ� :
//		1.���Ӵ���Ŀɶ��ԺͿ�ά����
//		2.��#define����ı�ʶ���Ƚ�ö�������ͼ��, �����Ͻ���
//		3.��ֹ��������Ⱦ(��װ)
//		4.���ڵ���
//		5.ʹ�÷���, --�ο��Զ���������*/
//}


////�����塪��������
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}