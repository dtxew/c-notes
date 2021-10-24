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
		printf("��ѡ��Ҫ�ŵ�����\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				display_board(mine, ROWS, COLS);
				system("pause");
				break;
			}
			else
			{
				if (show[x][y] != '*')
				{
					printf("���걻ռ�ã���������\n");
				}
				else
				{
					open_board(mine,show, ROW, COL, x, y);
					display_board(show, ROWS, COLS);
					printf("���Ƿ���Ҫ��ǣ�1�� or 0��\n");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 1)
					{
						printf("��ʼ���\n");
						count1 = flag(mine, show, row, col);
						if (count1 == COUNT)
						{
							printf("��ϲ����Ӯ�ˣ�\n");
							break;
						}
					}
						
					else
						printf("����\n");
					
				}
			}
		}
		else
		{
			printf("����Ƿ����������룡\n");
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
		printf("��������Ϊ���׵�λ��,�����Ѿ���ǵ�������ȡ��\n");
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
				printf("���걻ռ�ã�\n");
			}

		}
		else
		{
			printf("����Ƿ����������룡\n");
		}
		printf("�Ƿ������1�� or 0��\n");
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
		else if (count_mine(mine, x, y) != 0)//�ж���Χ�Ƿ�����,����ֱ�ӱ����ж�
		{
			show[x][y] = count_mine(mine, x, y) + '0';
		}
		else
		{
			show[x][y] = ' ';//��ǣ���ֹ�ظ�����
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



