#include"game.h"

void game()
{
	char show[ROWS][COLS];
	char mine[ROWS][COLS];
	make_board(show, ROWS, COLS, '*');
	make_board(mine, ROWS, COLS, '0');
	set_mine(mine, ROW, COL);
	display_board(show, ROWS, COLS);
	//display_board(mine, ROWS, COLS);

	find_mine(show, mine, ROW, COL);

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始！\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			system("pause");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}