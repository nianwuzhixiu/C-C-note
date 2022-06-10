

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
{		
	char end=0 ;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		end=Iswin(board, ROW, COL);
		if(end!='R')
		{
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		end = Iswin(board, ROW, COL);
		if (end != 'R')
		{
			break;
		}
	}
	if (end=='*')
	{
		printf("���Ӯ\n");
	}
	else if (end == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
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