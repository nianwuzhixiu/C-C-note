

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

//游戏的整个算法的实现
void game()
{		
	char end=0 ;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		end=Iswin(board, ROW, COL);
		if(end!='R')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		end = Iswin(board, ROW, COL);
		if (end != 'R')
		{
			break;
		}
	}
	if (end=='*')
	{
		printf("玩家赢\n");
	}
	else if (end == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择！");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏的实现
			//printf("三子棋\n");
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
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