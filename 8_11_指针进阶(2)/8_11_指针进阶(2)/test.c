#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(int** arr,int(*p)[5])
//{
//	//用指针接收，且每个元素是int*
//}
//
//int main()
//{
//	int* arr[10];
//	int arr1[3][5];
//	test(arr,arr1);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int(*pf)(int, int) = Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//void calc(float(*pf)(float, float))
//{
//	float x = 0;
//	float y = 0;
//	float ret = 0;
//	printf("请输入两个操作数:\n");
//	scanf("%d%d", &x, &y);
//	ret = (*pf)(x, y);
//}
//
////case 1:
////	calc(add)//回调函数
//float Add(float x, float y)
//{
//	return x + y;
//}
//float Sub(float x, float y)
//{
//	return x - y;
//}
//float Mul(float x, float y)
//{
//	return x * y;
//}
//float Div(float x, float y)
//{
//	if (y == 0)
//	{
//		printf("error\n");
//		return 0;
//	}
//	else
//		return x / y;
//}
//void menu()
//{
//	printf("*****************\n");
//	printf("***  1.Add    ***\n");
//	printf("***  2.Sub    ***\n");
//	printf("***  3.Mul    ***\n");
//	printf("***  4.Div    ***\n");
//	printf("***  0.EXI    ***\n");
//	printf("*****************\n");
//}
// 
//int main()
//{
//	float(*arr[5])(float, float) = { 0,Add,Sub,Mul,Div };
//	int input = 0;
//	float x = 0;
//	float y = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出\n");
//			system("pause");
//		}
//			
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:\n");
//			scanf("%f %f", &x, &y);
//			float ret = arr[input](x, y);
//			printf("%.2f\n", ret);
//		}
//		else
//		{
//			printf("选择错误，重新选择！\n");
//		}
//	} while (input);
//	
//	
//
//	return 0;
//}
//#include<stdlib.h>
//
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int arr[] = { 2,4,562,21,4,5,32,4,5,34,2,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, 4, compare);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int binary_search(int* arr, int sz, int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)//
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			break;//
//	}
//	if (left <= right)//
//	{
//		return mid;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 23,45,67,89,355,377,456,555,666,777 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 0;
//	scanf("%d", &key);
//	int ret = binary_search(arr, sz, key);
//	if (ret >= 0)
//	{
//		printf("下标：%d\n", ret);
//	}
//	else
//	{
//		printf("无\n");
//	}
//	return 0;
//}

void step_wise(int arr[5][5], int r, int c, int key)
{
	//与右上角的元素做比较，如果比右上角元素大，就去掉一行，（一行的元素都比其小），反之去掉一列（一列的元素都比其大）
	int tmp_r = 0;
	int tmp_c = c - 1;
	while (tmp_r < r && tmp_c < c)
	{
		if (key > arr[tmp_r][tmp_c])
		{
			tmp_r++;
		}
		else if(key < arr[tmp_r][tmp_c])
		{
			tmp_c--;
		}
		else
		{
			printf("yes\n");
			break;
		}
	}
}

int main()
{
	int arr[5][5] = { 1,4,7,11,15,2,5,8,12,19,3,6,9,15,22,10,13,14,17,24,18,21,23,26,30 };
	int n = 21;
	
	//scanf("%d", &n);
	step_wise(arr, 5, 5, n);

	return 0;
}