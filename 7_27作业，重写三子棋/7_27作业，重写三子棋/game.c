#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1

void menu()
{
	printf("*********************************\n");
	printf("*****欢迎游玩三子棋！************\n");
	printf("*****made by 东条希尔薇**********\n");
	printf("*******1.     play***************\n");
	printf("*******0.     exit***************\n");
	printf("*********************************\n");
	
}

void make_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void display_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i != row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j != col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此坐标已被占用！\n");
			}
		}
		else
		{
			printf("坐标非法，重新输入！\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char iswin(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][0] && board[i][1] == board[i][2]&&board[i][1]=='*')
			return board[i][1];
		if (board[i][1] == board[i][0] && board[i][1] == board[i][2] && board[i][1] == '#')
			return board[i][1];
		
	}
	for (int j = 0; j < col; j++)
	{
		if (board[1][j] == board[0][j] && board[1][j] == board[2][j]&&board[1][j]=='*')
			return board[1][j];
		if (board[1][j] == board[0][j] && board[1][j] == board[2][j] && board[1][j] == '#')
			return board[1][j];
	}
	if (board[1][1] == board[0][0] && board[1][1] == board[2][2]&&board[1][1]=='*')
		return board[1][1];
	if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1] == '#')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]&&board[1][1]=='*')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == '#')
		return board[1][1];
	int ret = isdraw(board, ROW, COL);
	if (ret == 1)
		return 'Q';
	else
		return 'C';

}



int isdraw(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
				
			}
		}
	}
	return 1;
}
