#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main() 
//{
//	int i = 0;
//	for ( i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//
//	/*int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	//system("pause");//系统暂停
//	return 0;
//}

//test.c			可执行程序
//Debug				Debug版本的可执行程序
//Release			Release版本的可执行程序，发布版本，此版本不可调试


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{	
//	test();
//	return 0;
//}

//int main()				//调试实例
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//调试后加的
//		for ( j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i <= 100; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//void my_strcpy(char* dest, char* src)			//优化前
//{
//	while (*src !='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)			//优化后
//{
//	if (dest!=NULL&&src!=NULL)
//	{
//		while (*dest++ =*src++)
//		{
//			;
//		}
//	}
//}

char* my_strcpy(char* dest, const char* src)			//优化后
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "###################";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;
//	printf("%d\n",num);
//}