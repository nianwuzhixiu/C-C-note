#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	int i = 0x11223344;
//	//int* pa = &i;
//	char* pc = (char*)( & i);
// //ָ�����;�����ָ����н����ò�����ʱ���ܷ��ʵĿռ��С
//	//int* p ;	*p�ܷ���4���ֽ�
//	//char* p;	*p�ܷ���1���ֽ�
//	//double* p;*p�ܷ���8���ֽ�
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//ָ�����;����ˣ�ָ��һ���߶�Զ��ָ��Ĳ�����
//	//int *p p+1 ->4
//	//char *p p+1 ->1
//
//	return 0;
//}

//int main()				//Ұָ��
//{
//	//int arr[10] = { 0 };
//	//int* p = arr;//������-��Ԫ�ص�ַ
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;
//	//}//��������0��Ϊ1
//
//	//int* p;			//1.Ұָ�롢�ֲ���ָ���������ʼ�����ͱ���ʼ�����ֵ
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 15; i++)//ָ��Խ��ͳ�Ϊ��Ұָ��
//	{
//		*(p + i) = 1;
//	}//��������0��Ϊ1
//
//	return 0;
//}

//int* t()
//{
//	int a = 10;
//	return &a;			//2.ָ��ָ��Ŀռ䱻�ͷţ���ΪҰָ��
//}
//int main()
//{
//	int* p = t();
//	*p = 20;
//	return 0;
//}

//int main()					//3.����Խ��Ұָ��
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//		//*p++;
//	}
//
//	return 0;
//	//��ι��Ұָ�룺
//	//1.ָ���ʼ��,��ֵһ����ָ�룺int *p=NULL
//	//2.����Խ��
//	//3.��ʹ�õ�ָ�룬��ֵ�ɿ�ָ��
//	//4.ָ��ʹ��֮ǰ�ж���Ч�ԣ��ǲ��ǿ�ָ��
//}

										//ָ�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = &arr[4];
//	for (i = 0; i < 3; i++)					//ָ��Ӽ�����
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *p);
//		p = p - 1;
//	}
//	return 0;
//}

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main() 
//{
//	
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++;
//		printf("%f", *vp);
//	}
//}


//int my_strln(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()						//ָ���ָ�룬����ͬһ���ռ�
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int n=&arr[9] - &arr[0];
//	//printf("%d\n", n);
//	char arr[] = "bit";
//	int len = my_strln(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ��Ĺ�ϵ����,�����������ĵ�ַ���бȽϣ������ܺ�����ǰ�ĵ�ַ�Ƚ�


//int main()						
//
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);				//��ַ-������Ԫ�ص�ַ,һ������¶�����Ԫ�ص�ַ
//	printf("%p\n", arr+1);	//+4
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//+4
//	printf("%p\n", &arr);				//��������ĵ�ַ
//	printf("%p\n", &arr+1);	//+40
//	//1.&arr - &������-��ʱ������Ԫ�ص�ַ��������������ʾ�������飬&arrȡ��������������ĵ�ַ
//	//2.sizeof(arr) --sizeof(������),��ʱҲ�Ǳ�ʾ�������飬sizeof(arr)�������������С
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d\n", arr[i]);
//		printf("%p  ========  %p\n", p + i, &arr[i]);//ָ���������
//	}
//	return 0;
//
//}


										//����ָ��
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;		//ppa���Ƕ���ָ��

	//ָ������    --����	--���ָ�������
	int b = 20;
	int c = 30;
	int* pb = &b;
	int* pv = &c;
	int* arr2[3] = { &a,&b,&c };			//ָ��
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr2[i]));

	}

	//����ָ��	  --ָ��

}