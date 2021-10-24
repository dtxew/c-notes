//#include"game.h"
//void game()
//{
//	char show[ROWS][COLS];//能一一对应，使用ROWS
//	char mine[ROWS][COLS];
//	make_board(show, ROWS, COLS,'*');
//	make_board(mine, ROWS, COLS,'0');
//	set_mine(mine, ROW, COL);
//	display_board(mine, ROW, COL);
//	display_board(show, ROW, COL);
//	find_mine(mine,show, ROW, COL);
//	
//
//
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			system("pause");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	//float a = 9 / 2.0;
//	//float b = 9 / 2;
//	//printf("%f\n", a);
//	//printf("%f\n", b);
//	//int a = 5 << 1;
//	//printf("%d\n", a);
//	/*int a = -1 << 1;*/
//	int a = -1 >> 1;
//	printf("%d\n", a);
//	return 0;
//}
void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int* arr, int sz)
{
	int *left = arr;
	int *right = arr + sz - 1;
	
	while (left < right)
	{

		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
		
	}
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);

	print(arr,sz);
	printf("\n");
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	reverse(arr1,sz1);
	print(arr1, sz1);
	return 0;
}