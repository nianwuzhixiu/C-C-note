#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 3
#define COL 3

#include <stdlib.h>
#include <time.h>



void Initboard(char board[ROW][COL], int row, int col);//函数声明
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);

//四种游戏状态：人赢 *，电脑赢#，平E，继续游戏R
char Iswin(char board[ROW][COL], int row, int col);
