

#include "game.h"

void menu()
{
	printf("* * * * * * * * * * * * * * * * *\n");
	printf("* * * * 1. play   0. exit * * * *\n");
	printf("* * * * * * * * * * * * * * * * *\n");
}
//    |    |
//----|----|----
//    |    |
//----|----|----
//    |    |   

//��Ϸ�������㷨��ʵ��
void game()
{		//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board,ROW,COL);

}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ��ʵ��
			//printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	//menu();
	test();
	//game();
}