#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"


int main()
{
	int input = 0;
	Contact con;//定义通讯录
	//初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case EXIT:
			//保存信息
			SaveContact(&con);
			printf("退出通讯录\n");
			DestoryContact(&con);
			system("pause");
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("无此操作选项！\n");
			break;
		}
	} while (input);
	return 0;
}