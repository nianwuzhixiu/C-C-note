#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 3
#define COL 3

#include <stdlib.h>
#include <time.h>



void Initboard(char board[ROW][COL], int row, int col);//��������
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);

//������Ϸ״̬����Ӯ *������Ӯ#��ƽE��������ϷR
char Iswin(char board[ROW][COL], int row, int col);
