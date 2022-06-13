#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//int a = -1;
	////整数的二进制表示有：原码、反码、补码
	////存储到内存的是补码
	////10000000000000000001 -原码
	////11111111111111111110 -反码
	////11111111111111111111 -补码
	//int b = a >> 1;			//操作的是补码
	//printf("%d\n", b);
	//return 0;

	//int a = 3;
	//int b = 5;
	//int c = a & b;    //二进制与
	////0000000000000000000000000000011
	////0000000000000000000000000000101
	////0000000000000000000000000000001
	//printf("%d\n", c);
	// c = a | b;    //二进制位或
	////0000000000000000000000000000011
	////0000000000000000000000000000101
	////0000000000000000000000000000111
	//printf("%d\n", c);
	// c = a ^ b;    //二进制位异或,相同为0，相异为1
	////0000000000000000000000000000011
	////0000000000000000000000000000101
	////0000000000000000000000000000110
	//printf("%d\n", c);

	////不创建临时变量交换两个数字
	//int a = 3;  //011
	//int b = 5;	//101
	//printf("%d %d\n", a, b);
	////加减法
	////可能会溢出
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("%d %d\n", a, b);

	////异或的方法
	//a = a ^ b;	//110
	//b = a ^ b;	//011
	//a = a ^ b;	//101

	//int num = 0;
	//int count = 0;
	////scanf("%d", &num);
	////统计num补码 中有几个1，负数不可用
	///*while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//printf("%d\n", count);
	//return 0;*/

	//int i = 0;
	//for ( i = 0; i < 32; i++)
	//{
	//	if (1==((num>>i)&1))
	//	{
	//		count++;
	//	}
	//}
	////printf("%d\n", count);
	////sizeof 计算的变量所占内存的空间大小，单位是字节
	//int a = 11;
	//char c = 'a';
	//char* p = &c;
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(c));
	//printf("%d\n", sizeof(char));	
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(int [10]));
	//
	//a = a | (1 << 2);	//15
	//printf("%d\n", a);
	//a = a & (~(1 << 2));//11
	//printf("%d\n", a);

	//printf("%d\n", ++a);	//先加加，在使用
	//printf("%d\n", a++);	//先使用，在++

	//int b = (int)3.15;

	//printf("%d\n", ~a);//~按（二进制）位取反

	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;//前半部分为真就不计算后半部分
	//i = a++ || ++b || d++;
	//printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);

	//a = 10;
	//b = 2;
	//int max = 0;
	//max = (a > b ? a : b);
	// c = (a > b, a = b + 10, a, b = a + 5);//逗号表达式，只输出最后一项
	//printf("%d\n", max);
	//printf("%d\n", c);
	//return 0;
//}

//struct Stu//结构体
//{
//	char name[10];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三",20,"20221122" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//结构体指针->成员名
//	printf("%d\n", ps->age);
//	printf("%s\n", (*ps).name);	
//	printf("%d\n", (*ps).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	return 0;
//}

int main()			//整型提升，正数高位补0,负数补1
{
	char a = 3;
	//000000000000000000000000000011
	//a-00000011
	char b = 127;
	//000000000000000000000001111111
	//b-01111111
	char c = a + b;
	//c-10000010
	//1111111111111111111111110000010 -补码
	//1111111111111111111111110000001 -反码
	//1000000000000000000000001111110 -原码

	printf("%d\n", c);
	return 0;
}