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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			system("pause");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}