#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int* p = arr;
//	for (int i = 0; i < 15; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//void Sort(int* arr, int sz)
//{
//
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//优化方式
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//这次仍然是无序的，不能跳出
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,2,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include"game.h"
//
//void game()
//{
//	char board[ROW][COL] = { 0 };
//	make_board(board, ROW, COL);
//	print_board(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		player_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		ret = iswin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		computer_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		ret = iswin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		
//		
//	}
//	if (ret == '*')
//	{
//		printf("玩家\n");
//	}
//	else if (ret == "#")
//	{
//		printf("电脑\n");
//	}
//	else
//	{
//		printf("平局\n");
//	}
//	
//
//
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			
//			printf("开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			system("pause");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void bubble_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,6,8,9,7,1,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

void arr_change(int* arr1, int* arr2, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}



int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[] = { 11,22,33,44,55,66,77,88 };
	int sz1 = sizeof(arr1) / sizeof(arr2[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int i = 0;
	printf("交换前\n");
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz2; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	arr_change(arr1, arr2, sz1);
	
	printf("交换后\n");
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz2; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}