#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����һ��ѧ�������֡����䡢�绰���Ա�
//struct-�ṹ��ؼ���		Stu-�ṹ���ǩ		struct Stu-�ṹ������
//typedef struct Stu
//{
//	char name[10];			//��Ա����
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;		//ȫ�ֱ���
//void print(Stu t)
//{
//	printf("name: %s\n", t.name);
//	printf("age:  %d\n", t.age);
//	printf("tele: %s\n", t.tele);
//	printf("sex:  %s\n", t.sex);
//}
//void print1(stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//
//}
//int main()
//{
//	//struct Str s;	//�ֲ��ṹ�����
//	stu s1={"����",20,"1234567894","��"};
//	struct Stu s2 = { "����",20,"1234567894","δ֪" };
//	print(s1);
//	print1(&s1);
//	return 0;
//}

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello\n";
	struct T t = { "hehe",{100,'a',"hello world",3.14},arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.pc);
	system("pause");
	return 0;
}


//int Ass(int x, int y)		
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int rat = Add(a, b);
//	return 0;
//}
//ջ���ֲ���������������ʽ��������������Ҳ���ٿռ�
//��������̬�ڴ���䣬malloc/free,realloc,ralloc
//��̬����ȫ�ֱ�������̬����