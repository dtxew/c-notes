#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"


int main()
{
	int input = 0;
	Contact con;//����ͨѶ¼
	//��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��\n");
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
			//������Ϣ
			SaveContact(&con);
			printf("�˳�ͨѶ¼\n");
			DestoryContact(&con);
			system("pause");
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("�޴˲���ѡ�\n");
			break;
		}
	} while (input);
	return 0;
}