#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("*****��ӭ����ɨ����Ϸ��**********\n");
	printf("*****made by ����ϣ��ޱ**********\n");
	printf("*******1.     play***************\n");
	printf("*******0.     exit***************\n");
	printf("*********************************\n");

}

void make_board(char board[ROWS][COLS], int rows, int cols, char a)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = a;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
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

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//дһ��չ������
	int win = 0;


		
		while (win<row*col-COUNT)
		{
			int x = 0;
			int y = 0;
			printf("����������\n");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("�㱻ը���ˣ�\n");
					display_board(mine, ROW, COL);
					system("pause");
					break;
				}
				else
				{
					if (show[x][y] == '*')
					{
						int count = count_mine(mine, x, y);
						show[x][y] = count + '0';
						display_board(show, ROW, COL);
						win++;
					}
					else
					{
						printf("�����걻ռ�ã�\n");
					}

				}
			}
			else
			{
				printf("����Ƿ����������룡\n");
			}
		}

	
	if (win == row * col - COUNT)
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
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



