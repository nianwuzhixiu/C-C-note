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
//	//system("pause");//ϵͳ��ͣ
//	return 0;
//}

//test.c			��ִ�г���
//Debug				Debug�汾�Ŀ�ִ�г���
//Release			Release�汾�Ŀ�ִ�г��򣬷����汾���˰汾���ɵ���


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

//int main()				//����ʵ��
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//���Ժ�ӵ�
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


//void my_strcpy(char* dest, char* src)			//�Ż�ǰ
//{
//	while (*src !='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)			//�Ż���
//{
//	if (dest!=NULL&&src!=NULL)
//	{
//		while (*dest++ =*src++)
//		{
//			;
//		}
//	}
//}

char* my_strcpy(char* dest, const char* src)			//�Ż���
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);//����
	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
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
//	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	printf("%d\n",num);
//}