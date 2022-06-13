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
// //指针类型决定了指针进行解引用操作的时候，能访问的空间大小
//	//int* p ;	*p能访问4个字节
//	//char* p;	*p能访问1个字节
//	//double* p;*p能访问8个字节
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
//	//指针类型决定了，指针一步走多远（指针的步长）
//	//int *p p+1 ->4
//	//char *p p+1 ->1
//
//	return 0;
//}

//int main()				//野指针
//{
//	//int arr[10] = { 0 };
//	//int* p = arr;//数组名-首元素地址
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;
//	//}//把数组内0换为1
//
//	//int* p;			//1.野指针、局部的指针变量不初始化，就被初始化随机值
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素地址
//	int i = 0;
//	for (i = 0; i < 15; i++)//指针越界就成为了野指针
//	{
//		*(p + i) = 1;
//	}//把数组内0换为1
//
//	return 0;
//}

//int* t()
//{
//	int a = 10;
//	return &a;			//2.指针指向的空间被释放，成为野指针
//}
//int main()
//{
//	int* p = t();
//	*p = 20;
//	return 0;
//}

//int main()					//3.数组越界野指针
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
//	//如何规避野指针：
//	//1.指针初始化,赋值一个空指针：int *p=NULL
//	//2.避免越界
//	//3.不使用的指针，赋值成空指针
//	//4.指针使用之前判断有效性，是不是空指针
//}

										//指针的运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = &arr[4];
//	for (i = 0; i < 3; i++)					//指针加减整数
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
//int main()						//指针减指针，得在同一个空间
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int n=&arr[9] - &arr[0];
//	//printf("%d\n", n);
//	char arr[] = "bit";
//	int len = my_strln(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针的关系运算,允许与数组后的地址进行比较，但不能和数组前的地址比较


//int main()						
//
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);				//地址-传的首元素地址,一般情况下都是首元素地址
//	printf("%p\n", arr+1);	//+4
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//+4
//	printf("%p\n", &arr);				//整个数组的地址
//	printf("%p\n", &arr+1);	//+40
//	//1.&arr - &数组名-此时不是首元素地址，这里数组名表示整个数组，&arr取出的是整个数组的地址
//	//2.sizeof(arr) --sizeof(数组名),此时也是表示整个数组，sizeof(arr)计算整个数组大小
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d\n", arr[i]);
//		printf("%p  ========  %p\n", p + i, &arr[i]);//指针访问数组
//	}
//	return 0;
//
//}


										//二级指针
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;		//ppa就是二级指针

	//指针数组    --数组	--存放指针的数组
	int b = 20;
	int c = 30;
	int* pb = &b;
	int* pv = &c;
	int* arr2[3] = { &a,&b,&c };			//指针
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr2[i]));

	}

	//数组指针	  --指针

}