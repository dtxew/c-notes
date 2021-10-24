#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void move(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (arr[left] % 2 == 1 && left < right)
//	{
//		left++;
//	}
//	while (arr[right] % 2 == 0 && left < right)
//	{
//		right--;
//	}
//	if (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,43,5,6,45,6,7,8,8,86 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 255;
//	printf("%d\n", a);
//	char b = 255;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	
//	printf("%d\n", sizeof(void));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50][50] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

int main()
{

	return 0;
}