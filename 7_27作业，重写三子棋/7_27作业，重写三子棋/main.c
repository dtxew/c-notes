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
		computer_move(board, ROW, COL);//ϣ��������ԣ����Զģ������Լ�Ӯ
		display_board(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		
	}
	if (ret == '*')
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
		system("pause");
	}
	else if (ret == '#')
	{
		printf("�汿��û�м��˹����ܵĵ����㶼����\n");
		printf("����ܹػ��ͷ���\n");
		system("shutdown -s -t 10");
		system("pause");
		
	}
	else if (ret == 'Q')
	{
		printf("�汿��û�м��˹����ܵĵ����㶼��ƽ��\n");
		printf("����ܹػ��ͷ���\n");
		system("shutdown -s -t 60");
		printf("���������������������ͷŹ��㣡��ֱ��������������������\n");
		char input1[10] = { 0 };
		while (1)
		{
			printf("������\n");
			scanf("%s", input1);
			if (0 == strcmp(input1, "������"))
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			system("pause");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}
	return 0;
}
