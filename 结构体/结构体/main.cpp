#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//描述一个学生：名字、年龄、电话、性别
//struct-结构体关键字		Stu-结构体标签		struct Stu-结构体类型
//typedef struct Stu
//{
//	char name[10];			//成员变量
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;		//全局变量
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
//	//struct Str s;	//局部结构体变量
//	stu s1={"张三",20,"1234567894","男"};
//	struct Stu s2 = { "张三",20,"1234567894","未知" };
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
//栈：局部变量，函数的形式参数，函数调用也开辟空间
//堆区：动态内存分配，malloc/free,realloc,ralloc
//静态区：全局变量，静态变量