#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("*****欢迎游玩扫雷游戏！**********\n");
	printf("*****made by 东条希尔薇**********\n");
	printf("*******1.     play***************\n");
	printf("*******0.     exit***************\n");
	printf("*********************************\n");

}

void make_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows-1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void find_mine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int count1 = 0;
	while (1)
	{
		printf("请选择要排的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				display_board(mine, ROWS, COLS);
				system("pause");
				break;
			}
			else
			{
				if (show[x][y] != '*')
				{
					printf("坐标被占用！重新输入\n");
				}
				else
				{
					open_board(mine,show, ROW, COL, x, y);
					display_board(show, ROWS, COLS);
					printf("你是否需要标记？1是 or 0否\n");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 1)
					{
						printf("开始标记\n");
						count1 = flag(mine, show, row, col);
						if (count1 == COUNT)
						{
							printf("恭喜，你赢了！\n");
							break;
						}
					}
						
					else
						printf("继续\n");
					
				}
			}
		}
		else
		{
			printf("坐标非法！重新输入！\n");
		}

	}
	
}

int count_mine(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			count += (mine[i][j] - '0');
		}
	}
	return count;
	
}

int flag(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int input = 0;
	int count = 0;
	int x = 0;
	int y = 0;
	do
	{
		printf("请标记你认为的雷的位置,输入已经标记的坐标已取消\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '$';
				for (int i = 1; i <= row; i++)
				{
					for (int j = 1; j <= col; j++)
					{
						if (show[i][j] == '$' && mine[i][j] == '1')
						{
							count++;
						}
					}
				}
				display_board(show, ROWS, COLS);
				
			}
			else if (show[x][y] == '$')
			{
				show[x][y] = '*';
			}
			else
			{
				printf("坐标被占用！\n");
			}

		}
		else
		{
			printf("坐标非法，重新输入！\n");
		}
		printf("是否继续？1是 or 0否\n");
		scanf("%d", &input);
	} while (input);
	return count;
}

void open_board(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col,int x,int y)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (show[x][y] == ' ')
		{
			return;
		}
		else if (count_mine(mine, x, y) != 0)//判断周围是否有雷,不用直接遍历判断
		{
			show[x][y] = count_mine(mine, x, y) + '0';
		}
		else
		{
			show[x][y] = ' ';//标记，防止重复调用
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					
					open_board(mine, show, row, col, i, j);
				}
			}
		}
	}
	

}



