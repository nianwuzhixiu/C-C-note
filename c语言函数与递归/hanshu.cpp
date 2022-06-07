#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//strcpy	- string copy 字符串拷贝	
//	//strlen	- string length 字符串长度有关
//	
//	char arr1[] = "bit";
//	char arr2[20] = "#####";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
//	//memset	把原内容内存替换成给定的值
//	//memory - 内存 set - 设置
//	char arr[] = { "hello world" };
//	memset(arr, '!', 5);	//assc码值 
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数组成
// ret_type  fun_name (paral,*)
//{
//statement;		语句
//}
// ret_type 返回值类型；fun_name 函数名；paral 函数参数；
//
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a =%d b =%d\n", a, b);
//		//pa指针变量	int* pa = &a;
//		//解引用操作	*pa;
//	Swap(&a, &b);
//	printf("a =%d b =%d\n", a, b);
//
//}

//形参-形式参数-形式上的参数 仅仅在函数中调用
//当实参传给形参的时候，形参是对实参的拷贝
//形参的改变不会改变实参！！！
//传值调用：不影响实参
//传址调用：影响实参


//int binary_search(int arr[], int k,int sz)//arr[]是个指针
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找某个数
//	//如果找到了返回这个数下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//传过去的是arr地址
//	if (ret == -1) 
//	{
//		printf("找不到！");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}

//void Pro(int* a)
//{
//	*a=*a+1;
//}
//int main()
//{
//	int b = 1;
//	int num = 0;
//	int* a = &num;
//	for (b = 1; b < 10; b++)
//	{
//		if (b % 2 == 0) 
//		{
//			Pro(a);
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}
//函数嵌套调用，链式访问
////链式访问
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//#include "Add.h"
//函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//		内存：
//		栈 - 局部变量，函数形参
//		堆 - 动态开辟的内存，malloc，calloc
//		静态区 - 全局变量，static修饰的变量
//		stack overflow 栈溢出


//void print(int n) 
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); 
//			//递归 -- 大事化小,把原问题拆解成与原问题相似的小问题
//			//递归的两个必要条件：
//			//1、存在限制条件，当满足这个限制条件时，递归不在继续
//			//2、每次递归调用之后越来越接近这个限制条件
//	print(num);
//}


//int my_strlen(char* str) //不用递归
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) //用递归
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
////my_strlen("bit")
////1+my_strlen("bi")
////1+1+my_strlen("b")
////1+1+1+my_strlen("")
////1+1+1+0
////0
//}
//void main()  //求字符串长度
//{
//	char arr[] = "hello";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	int len = my_strlen(arr);
//	//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址；
//	printf("%d\n", len);
//}


//int Fac1(int n)//非递归
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//递归 可以和循环语句转换
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main() //求n的阶乘
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//}


//斐波那契数列----后一个数等于前两个数之和
//int Fib(int n)//递归重复计算
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)//循环
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) 
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{		//先写怎么用在写函数——TDD：测试驱动开发
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}

//汉罗塔问题