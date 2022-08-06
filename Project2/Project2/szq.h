#ifndef __SZQ_H__
#define __SZQ_H__

#define ROW 3
#define COL 3


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>


void szqMenu();
void szqStart(int *play);
void szqEnd(int *end);
void DisplayBoard(char board[ROW][COL]);
void IntBoard(char board[ROW][COL]);
void robootMove(char board[ROW][COL]);
void playerMove(char board[ROW][COL]);
int IsWin(char board[ROW][COL]);

#endif // !__SZQ_H__

