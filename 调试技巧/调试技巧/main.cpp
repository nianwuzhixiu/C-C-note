#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


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


int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	return 0;
}