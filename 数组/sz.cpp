#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

//int main()			//一维数组
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下元素默认初始化为0
//	char arr2[5] = { 'a','b' };//98 就是‘b’
//	char arr3[5] = "ab";//ok a b \0 0 0
//	char arr4[] = "abcdef";
//	char arr5[] = { 'a','b','c','d','e' };
//	printf("%d\n", sizeof(arr4));//计算arr4占的空间大小6+1  \0
//	printf("%d\n", strlen(arr4));//求字符串长度 --库函数，引用头文件,到\0停止，没有\0输出随机值
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", strlen(arr5));
//	printf("%c\n", arr4[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}		//数组在内存中连续增长
//	return 0;
//}


//int main()			//二维数组
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//此时可以省略行，否则不能省略行
//	//printf("%d", arr1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//			
//		}
//		//printf("\n");
//	}
//	return 0;
//}

//void mppx(int arr[],int sz)
//{
//	//确定冒泡排序趟数；
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{		
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1) 
//		{
//			break;//有序直接跳出
//		}
//	}
//}
////数组作为函数参数
//int main()
//{
//	int arr[] = { 9,8,7,5,6,4,2,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//冒泡排序
//	int i = 0;
//	//对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	mppx(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	printf("%p\n", arr);//首元素地址
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//
	printf("%p\n", &arr[0] + 1);

	printf("%d\n", *arr);//1
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名)--数组名表示整个数组，这个函数是计算整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名取出的是整个数组的地址
	return 0;
}