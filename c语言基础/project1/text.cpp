#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//int main()
//{
//	printf("hello world \n");
//	return 0;
//}

//int main()		//if语句
//
//{
//	printf("%c\n", '\132');
//		return 0;
//}
//int main() {
//	int input = 1;
//	printf("看视频\n");
//	printf("你要好好学习么？（0/1）");
//	scanf("%d", &input);
//	if (input == 1) 
//	{
//		printf("好offer\n");
//	}
//	else 
//	{
//		printf("回家种田\n");
//	}
//	return 0;
//
//
//int main()		//while语句
//{
//	int line = 0;
//	printf("看视频\n");
//	while (line < 200) {
//		printf("敲一行代码：%d\n",line);
//		line++;
//	}
//	if(line>=200)
//	printf("好offer\n");
//	return 0;
//}

//int main()		//求和
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}
	//int Add(int x, int y) 
	//{
	//	int z = x + y;
	//	return z;
	//}
//int main()			//函数存入求和
//{
//
//	int a = 15;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a , b);
//	sum = Add(150, 560);
//	printf("sum=%d\n", sum);
//	return 0;
//}

	//int main() //数组
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	while (i < 10)
	//	{
	//		printf("%d\n", arr[i]);
	//		i++;
	//	}
	//	printf("%zd\n", sizeof(arr));
	//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//	return 0;
	//}
	
	//int main()//原码取反反码，反码一补码；
	//{
	//	int a = 0;
	//	int b = ~a;
	//	printf("%d\n", b);
	//}

	//
	//int main()
	//{
	//	int a = 10;
	//	int b = a++;//后置先使用在++
	//	int c = ++a;//前置先++在使用，无论如何结果都改变
	//	printf("b=%d,c=%d", b, c);
	//}

	//int main()
	//{
	//	int a = 16;
	//	int b = 8;
	//	int max = a > b ? a : b;
	//	printf("较大值是%d",max);
	//	return 0;
	//}

	
	
//void txt(){
//			static int i = 1;//是个静态局部变量,修饰局部变量延长生命周期
//			//修饰全局变量，改变作用域,只能在本地用。修饰函数改变函数的链接属性（作用域）
//			i++;
//			printf("i=%d\n", i);
//		}
//
//
//int main()
//	{
//		int a = 0;
//		while (a < 5)
//		{
//			txt();
//			a++;
//		}
//		return 0;
//	}


//int	Max(int x, int y) {					//函数定义
//		if (x > y)
//			return x;
//		else
//			return y;
//	}
//#define MAX(m,n) (m>n?m:n)				//宏定义
////define 定义标识符常量，可以定义宏-带参数
////#define MAX 100  
//	int main() {
//		int a = 10;
//		int b = 20;
//		//函数
//		int max = Max(a, b);
//		printf("max=%d\n", max);
//		//宏的方式
//		max = MAX(a, b);
//		printf("max=%d\n", max);
//		return 0;
//
//	}

	//int main()					//指针
	//{
	//	//int a = 12;//四字节
	//	//int* p = &a;//有一种变量是用来存放地址的--指针变量
	//	//printf("%p\n", &a);
	//	//printf("%p\n", p);
	//	//*p = 20;//*解引用操作符
	//	//printf("%d\n", a);
	//	//return 0;

	//	double d = 3.14;
	//	double* a = &d;
	//	*a = 5.5;
	//	printf("%lf\n", d);
	//	printf("%d\n", sizeof(a));
	//	return 0;
	//}

//struct  Man {
//	char name[20];
//	short age;
//	};									//结构体 struct
//
//int main()						
//	{
//	struct Man a1 = { "刘一城",24 };
//	printf("姓名:%s\n", a1.name);
//	printf("年龄:%d\n", a1.age);
//	//a1.age = 18;
//	////a1.name = "王玉婷";
//	//printf("书名:%s\n", a1.name);
//	//printf("年龄:%d\n", a1.age);
//	//return 0;
//	struct Man* b = &a1;
//	printf("姓名:%s\n", (*b).name);		//.		结构体变量.成员
//	printf("年龄:%d\n", (*b).age);
//	printf("%s\n", b->name);
//	printf("%d\n", b->age);				//->	结构体指针->成员
//	}

//int main()
//{
//	int age = 54;
//	if (age < 18) 
//	{
//		printf("青年\n");
//	}
//	else 
//		if (age >= 18 && age < 28)
//	{
//		printf("壮年\n");
//	}
//	else 
//		if (age >= 28 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else 
//		if (age >= 50 && age < 90)
//	{
//		printf("老年\n");
//	}
//	return 0;
//}

//int main()					//if语句
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d是奇数\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

//int main()								//switch语句 分支语句
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期1\n");
//			break;
//		case 2:
//			printf("星期2\n");
//			break;
//		case 3:
//			printf("星期3\n");
//			break;
//		case 4:
//			printf("星期4\n");
//			break;
//		case 5:
//			printf("星期5\n");
//			break;
//		case 6:
//			printf("星期6\n");
//			break;
//		case 7:
//			printf("星期7\n");
//			break;
//		default:
//			printf("输入错误");
//			break;
//	}
//	return 0;
//}

//int main()								//循环语句
//{
//	//int i = 1;
//	//while (i < 15) {
//	//	i++;
//	//	if (i == 10)					//continue跳过本次后面的循环，进入下一次循环
//	//		continue;
//	//	printf("%d\n", i);
//	//	
//	//}
//	//int ch = 0;
//	//				//ctrl+z结束；end of file 文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码,缓冲区有个\n
//	//getchar();				//	读取\n
//	while ((ch = getchar()) != '\n')		//循环读取非\n
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else 
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()					//只输入数字0-9
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
////	for (;;)			//for循环的初始化、调整、判断都可以省略
////	{					//被省略的部分条件判断恒为真
////		printf("1\n");
////	}
//
//
//	//int a = 0;
//	//for (a = 1; a <= 10; a++) 
//	//{
//	//	if (a == 5) 
//	//	{
//	//		break;		//continue 不会死循环
//	//	}
//	//	printf("%d ", a);
//	//}
//int a = 1;
//do
//{
//	if (a == 5)
//	{
//		break;			//continue 进入死循环
//	}
//	printf("%d\n", a);
//	a++;
//} 
//while (a <= 10);
//	return 0;
//}

//int main()							//n位阶乘
//{
//	//int a = 0;
//	//int b = 0;
//	//int sum = 1;
//	//scanf("%d", &b);
//	//for (a = 1; a<=b ; a++)
//	//{
//	//	sum = sum * a;
//	//}
//	//printf("sum=%d\n", sum);
//	//return 0;
//
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	int ssum = 0;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)
//	{
//		sum = sum * a;
//		ssum = ssum + sum;
//	}
//	printf("sum=%d\n", sum);
//	printf("ssum=%d\n", ssum);
//
//	return 0;
//}

//int main()							//二分法查找数
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;		//左下标-起始数
//	int right = sz - 1;	//右下标-终止数
//	
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//		printf("找不到\n");
//	}
//	return 0;
//
//}

//int main()									//渐进边字
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;		//字符串结尾有个\n,所以-2
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);			//睡眠一秒=1000ms
//		system("cls");			//执行系统命令的函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	return 0;;
//}

//int main()									//输入三次密码，正确输出，错误退出
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) 
//	{
//		printf("请输入密码！");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)		//等号不能用比较两个字符串，用库函数--strcmp
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

//int main()							//比较三数大小
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()					//辗转相除法
//{
//	//int m = 1;
//	//int n = 1;
//	//int r = 0;
//	//scanf("%d%d", &m, &n);
//	//while (r=m % n)
//	//{
//	//	//r = m % n;
//	//	m = n;
//	//	n = r;
//	//}
//	//printf("%d\n", n);
//		//int a = 0;					//算闰年
//		//int year = 0;
//		//for (year = 1000; year <= 2000; year++)
//		//{
//		//	
//		//	if (year % 4 == 0 && year % 100 != 0)
//		//	{
//		//		printf("%d ", year);
//		//		a ++;
//		//	}
//		//	else if (year % 4 == 0)
//		//	{
//		//		printf("%d ", year);
//		//		a++;
//		//	}
//		//}
//		//printf("%d", a);
//
//	int i = 0;					
//	//找素数1.试除法产生2到i-1
//	//		2.sqrt-开平方的数学库函数
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i)) 
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()    //输出最大值
//{
//	int arr[] = { -1,2,5,8,9,12,45,7,54,-85,-196,15,-12 };
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	for (a = 1; a < 10; a++) 
//	{
//		for (b = 1; b < a+1; b++)
//		{
//			sum = a * b;
//			printf("%d * %d = %-2d ", a, b, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//RAND_MAX-32767
//void menu()
//{
//	printf ("***************************\n" );
//	printf ("****  1.play   0.exit  ****\n" );
//	printf ("***************************\n" );
//}
//void game() 
//{
//	int a = 0;
//	int b = 0;//接受猜到的数字
//	//printf("猜数字！\n");
//	//srand((unsigned int)time(NULL));			//拿时间戳获取时间节点
//	// time_t time(time_t *timer)
//	//时间戳：当前计算机时间减去计算机起始时间（1970.1.1 0：0：0）
//	a=rand()%100+1;						//生成随机数1-100
//	//printf("%d\n", a);
//	while (1)
//	{
//		printf("请猜数字。");
//		scanf("%d", &b);
//		if (b > a) 
//		{
//			printf("猜大了\n");
//		}
//		else if (b < a)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择！");
//			scanf("%d", & input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//				printf("退出游戏!\n");
//				break;
//			default:
//				printf("选择错误！\n");
//				break;
//		}
//
//	} while (input);
//		return 0;
//}

int main()
{
		char input[20] = { 0 };
		//shutdown -s -t 60 60秒后关机
		//system()  执行系统命令
		system("shutdown -s -t 60");
	again:
		printf("请注意，电脑一分钟后关机，输入取消关机则不关机。\n");
		scanf("%s", input);
		if (strcmp(input, "取消关机") == 0)		//比较两个字符串 strcmp()
		{
			system("shutdown -a");				//取消关机
		}
		else
		{
			goto again;
		}
		return 0;
}