#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char board[ROW][COL];
	make_board(board, ROW, COL);
	display_board(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		computer_move(board, ROW, COL);//希望改造电脑，可以赌，可以自己赢
		display_board(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		
	}
	if (ret == '*')
	{
		printf("恭喜你，你赢了！\n");
		system("pause");
	}
	else if (ret == '#')
	{
		printf("真笨，没有加人工智能的电脑你都能输\n");
		printf("请接受关机惩罚！\n");
		system("shutdown -s -t 10");
		system("pause");
		
	}
	else if (ret == 'Q')
	{
		printf("真笨，没有加人工智能的电脑你都能平局\n");
		printf("请接受关机惩罚！\n");
		system("shutdown -s -t 60");
		printf("不过，如果你承认你是猪，就放过你！（直接在下面打出“我是猪”）\n");
		char input1[10] = { 0 };
		while (1)
		{
			printf("请输入\n");
			scanf("%s", input1);
			if (0 == strcmp(input1, "我是猪"))
			{
				system("shutdown -a");
				system("pause");
				break;
			}
		}
	}

}


int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	menu();
	while (input)
	{
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			system("pause");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	}
	return 0;
}
