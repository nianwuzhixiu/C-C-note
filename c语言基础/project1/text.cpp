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

//int main()		//if���
//
//{
//	printf("%c\n", '\132');
//		return 0;
//}
//int main() {
//	int input = 1;
//	printf("����Ƶ\n");
//	printf("��Ҫ�ú�ѧϰô����0/1��");
//	scanf("%d", &input);
//	if (input == 1) 
//	{
//		printf("��offer\n");
//	}
//	else 
//	{
//		printf("�ؼ�����\n");
//	}
//	return 0;
//
//
//int main()		//while���
//{
//	int line = 0;
//	printf("����Ƶ\n");
//	while (line < 200) {
//		printf("��һ�д��룺%d\n",line);
//		line++;
//	}
//	if(line>=200)
//	printf("��offer\n");
//	return 0;
//}

//int main()		//���
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
//int main()			//�����������
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

	//int main() //����
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
	
	//int main()//ԭ��ȡ�����룬����һ���룻
	//{
	//	int a = 0;
	//	int b = ~a;
	//	printf("%d\n", b);
	//}

	//
	//int main()
	//{
	//	int a = 10;
	//	int b = a++;//������ʹ����++
	//	int c = ++a;//ǰ����++��ʹ�ã�������ν�����ı�
	//	printf("b=%d,c=%d", b, c);
	//}

	//int main()
	//{
	//	int a = 16;
	//	int b = 8;
	//	int max = a > b ? a : b;
	//	printf("�ϴ�ֵ��%d",max);
	//	return 0;
	//}

	
	
//void txt(){
//			static int i = 1;//�Ǹ���̬�ֲ�����,���ξֲ������ӳ���������
//			//����ȫ�ֱ������ı�������,ֻ���ڱ����á����κ����ı亯�����������ԣ�������
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


//int	Max(int x, int y) {					//��������
//		if (x > y)
//			return x;
//		else
//			return y;
//	}
//#define MAX(m,n) (m>n?m:n)				//�궨��
////define �����ʶ�����������Զ����-������
////#define MAX 100  
//	int main() {
//		int a = 10;
//		int b = 20;
//		//����
//		int max = Max(a, b);
//		printf("max=%d\n", max);
//		//��ķ�ʽ
//		max = MAX(a, b);
//		printf("max=%d\n", max);
//		return 0;
//
//	}

	//int main()					//ָ��
	//{
	//	//int a = 12;//���ֽ�
	//	//int* p = &a;//��һ�ֱ�����������ŵ�ַ��--ָ�����
	//	//printf("%p\n", &a);
	//	//printf("%p\n", p);
	//	//*p = 20;//*�����ò�����
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
//	};									//�ṹ�� struct
//
//int main()						
//	{
//	struct Man a1 = { "��һ��",24 };
//	printf("����:%s\n", a1.name);
//	printf("����:%d\n", a1.age);
//	//a1.age = 18;
//	////a1.name = "������";
//	//printf("����:%s\n", a1.name);
//	//printf("����:%d\n", a1.age);
//	//return 0;
//	struct Man* b = &a1;
//	printf("����:%s\n", (*b).name);		//.		�ṹ�����.��Ա
//	printf("����:%d\n", (*b).age);
//	printf("%s\n", b->name);
//	printf("%d\n", b->age);				//->	�ṹ��ָ��->��Ա
//	}

//int main()
//{
//	int age = 54;
//	if (age < 18) 
//	{
//		printf("����\n");
//	}
//	else 
//		if (age >= 18 && age < 28)
//	{
//		printf("׳��\n");
//	}
//	else 
//		if (age >= 28 && age < 50)
//	{
//		printf("����\n");
//	}
//	else 
//		if (age >= 50 && age < 90)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()					//if���
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d������\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

//int main()								//switch��� ��֧���
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("����1\n");
//			break;
//		case 2:
//			printf("����2\n");
//			break;
//		case 3:
//			printf("����3\n");
//			break;
//		case 4:
//			printf("����4\n");
//			break;
//		case 5:
//			printf("����5\n");
//			break;
//		case 6:
//			printf("����6\n");
//			break;
//		case 7:
//			printf("����7\n");
//			break;
//		default:
//			printf("�������");
//			break;
//	}
//	return 0;
//}

//int main()								//ѭ�����
//{
//	//int i = 1;
//	//while (i < 15) {
//	//	i++;
//	//	if (i == 10)					//continue�������κ����ѭ����������һ��ѭ��
//	//		continue;
//	//	printf("%d\n", i);
//	//	
//	//}
//	//int ch = 0;
//	//				//ctrl+z������end of file �ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//��������,�������и�\n
//	//getchar();				//	��ȡ\n
//	while ((ch = getchar()) != '\n')		//ѭ����ȡ��\n
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()					//ֻ��������0-9
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
////	for (;;)			//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
////	{					//��ʡ�ԵĲ��������жϺ�Ϊ��
////		printf("1\n");
////	}
//
//
//	//int a = 0;
//	//for (a = 1; a <= 10; a++) 
//	//{
//	//	if (a == 5) 
//	//	{
//	//		break;		//continue ������ѭ��
//	//	}
//	//	printf("%d ", a);
//	//}
//int a = 1;
//do
//{
//	if (a == 5)
//	{
//		break;			//continue ������ѭ��
//	}
//	printf("%d\n", a);
//	a++;
//} 
//while (a <= 10);
//	return 0;
//}

//int main()							//nλ�׳�
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

//int main()							//���ַ�������
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;		//���±�-��ʼ��
//	int right = sz - 1;	//���±�-��ֹ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//
//}

//int main()									//��������
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;		//�ַ�����β�и�\n,����-2
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);			//˯��һ��=1000ms
//		system("cls");			//ִ��ϵͳ����ĺ���-cls-�����Ļ
//		left++;
//		right--;
//	}
//	return 0;;
//}

//int main()									//�����������룬��ȷ����������˳�
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) 
//	{
//		printf("���������룡");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)		//�ȺŲ����ñȽ������ַ������ÿ⺯��--strcmp
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}

//int main()							//�Ƚ�������С
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


//int main()					//շת�����
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
//		//int a = 0;					//������
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
//	//������1.�Գ�������2��i-1
//	//		2.sqrt-��ƽ������ѧ�⺯��
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

//int main()    //������ֵ
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
//	int b = 0;//���ܲµ�������
//	//printf("�����֣�\n");
//	//srand((unsigned int)time(NULL));			//��ʱ�����ȡʱ��ڵ�
//	// time_t time(time_t *timer)
//	//ʱ�������ǰ�����ʱ���ȥ�������ʼʱ�䣨1970.1.1 0��0��0��
//	a=rand()%100+1;						//���������1-100
//	//printf("%d\n", a);
//	while (1)
//	{
//		printf("������֡�");
//		scanf("%d", &b);
//		if (b > a) 
//		{
//			printf("�´���\n");
//		}
//		else if (b < a)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("�¶��ˣ�\n");
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
//		printf("��ѡ��");
//			scanf("%d", & input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//				printf("�˳���Ϸ!\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//
//	} while (input);
//		return 0;
//}

int main()
{
		char input[20] = { 0 };
		//shutdown -s -t 60 60���ػ�
		//system()  ִ��ϵͳ����
		system("shutdown -s -t 60");
	again:
		printf("��ע�⣬����һ���Ӻ�ػ�������ȡ���ػ��򲻹ػ���\n");
		scanf("%s", input);
		if (strcmp(input, "ȡ���ػ�") == 0)		//�Ƚ������ַ��� strcmp()
		{
			system("shutdown -a");				//ȡ���ػ�
		}
		else
		{
			goto again;
		}
		return 0;
}