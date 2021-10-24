//#include "game.h"
//#define _CRT_SECURE_NO_WARNINGS 1
//
//void menu()
//{
//	printf("*********\n");
//	printf("  1. play \n");
//	printf("   0.  exit\n");
//	printf("*********\n");
//}
//
//void make_board(char board[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void print_board(char board[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf(" %c",board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//			printf("\n");
//			if (i < row - 1)
//			{
//				for (int j = 0; j < col; j++)
//				{
//					printf("---");
//					if (j < col)
//					{
//						printf("|");
//					}
//				}
//
//			}
//			printf("\n");
//			
//		}
//	}
//}
//
//void player_move(char board[ROW][COL], int row, int col)
//{
//	printf("玩家走,请输入坐标:\n");
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	while (1)
//	{
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("坐标被占用！\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法！\n");
//		}
//	}
//
//
//}
//
//void computer_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//
//
//}
//
//char iswin(char board[ROW][COL], int row, int col)
//{
//
//	
//}





