#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//strcpy	- string copy �ַ�������	
//	//strlen	- string length �ַ��������й�
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
//	//memset	��ԭ�����ڴ��滻�ɸ�����ֵ
//	//memory - �ڴ� set - ����
//	char arr[] = { "hello world" };
//	memset(arr, '!', 5);	//assc��ֵ 
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯�����
// ret_type  fun_name (paral,*)
//{
//statement;		���
//}
// ret_type ����ֵ���ͣ�fun_name ��������paral ����������
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
//		//paָ�����	int* pa = &a;
//		//�����ò���	*pa;
//	Swap(&a, &b);
//	printf("a =%d b =%d\n", a, b);
//
//}

//�β�-��ʽ����-��ʽ�ϵĲ��� �����ں����е���
//��ʵ�δ����βε�ʱ���β��Ƕ�ʵ�εĿ���
//�βεĸı䲻��ı�ʵ�Σ�����
//��ֵ���ã���Ӱ��ʵ��
//��ַ���ã�Ӱ��ʵ��


//int binary_search(int arr[], int k,int sz)//arr[]�Ǹ�ָ��
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
//	//���ֲ���
//	//��һ�����������в���ĳ����
//	//����ҵ��˷���������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//����ȥ����arr��ַ
//	if (ret == -1) 
//	{
//		printf("�Ҳ�����");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
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
//����Ƕ�׵��ã���ʽ����
////��ʽ����
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//#include "Add.h"
//��������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//		�ڴ棺
//		ջ - �ֲ������������β�
//		�� - ��̬���ٵ��ڴ棬malloc��calloc
//		��̬�� - ȫ�ֱ�����static���εı���
//		stack overflow ջ���


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
//			//�ݹ� -- ���»�С,��ԭ���������ԭ�������Ƶ�С����
//			//�ݹ��������Ҫ������
//			//1���������������������������������ʱ���ݹ鲻�ڼ���
//			//2��ÿ�εݹ����֮��Խ��Խ�ӽ������������
//	print(num);
//}


//int my_strlen(char* str) //���õݹ�
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) //�õݹ�
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
//void main()  //���ַ�������
//{
//	char arr[] = "hello";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	int len = my_strlen(arr);
//	//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ��
//	printf("%d\n", len);
//}


//int Fac1(int n)//�ǵݹ�
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//�ݹ� ���Ժ�ѭ�����ת��
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main() //��n�Ľ׳�
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//}


//쳲���������----��һ��������ǰ������֮��
//int Fib(int n)//�ݹ��ظ�����
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)//ѭ��
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
{		//��д��ô����д��������TDD��������������
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}

//����������