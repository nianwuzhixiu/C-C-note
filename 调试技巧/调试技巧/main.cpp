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
//	//system("pause");//ϵͳ��ͣ
//	return 0;
//}

//test.c			��ִ�г���
//Debug				Debug�汾�Ŀ�ִ�г���
//Release			Release�汾�Ŀ�ִ�г��򣬷����汾���˰汾���ɵ���


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