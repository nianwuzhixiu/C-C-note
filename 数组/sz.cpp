#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

//int main()			//һά����
//{
//	//����һ������-�������-10��
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };//98 ���ǡ�b��
//	char arr3[5] = "ab";//ok a b \0 0 0
//	char arr4[] = "abcdef";
//	char arr5[] = { 'a','b','c','d','e' };
//	printf("%d\n", sizeof(arr4));//����arr4ռ�Ŀռ��С6+1  \0
//	printf("%d\n", strlen(arr4));//���ַ������� --�⺯��������ͷ�ļ�,��\0ֹͣ��û��\0������ֵ
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", strlen(arr5));
//	printf("%c\n", arr4[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}		//�������ڴ�����������
//	return 0;
//}


//int main()			//��ά����
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//��ʱ����ʡ���У�������ʡ����
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
//	//ȷ��ð������������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{		
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1) 
//		{
//			break;//����ֱ������
//		}
//	}
//}
////������Ϊ��������
//int main()
//{
//	int arr[] = { 9,8,7,5,6,4,2,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//ð������
//	int i = 0;
//	//������arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
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
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//
	printf("%p\n", &arr[0] + 1);

	printf("%d\n", *arr);//1
	printf("%p\n", &arr);//����ĵ�ַ
	printf("%p\n", &arr+1);
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������)--��������ʾ�������飬��������Ǽ�����������Ĵ�С����λ���ֽ�
	//2.&�������������������������飬&������ȡ��������������ĵ�ַ
	return 0;
}