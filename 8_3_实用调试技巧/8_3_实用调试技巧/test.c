#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void test1()
//{
//	printf("hehe\n");
//}
//
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//void change(int arr[],int sz)
//{
//	int i = 0;
//	int arr1[50];
//	int arr2[50];
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			arr1[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr2[k++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	for (i,k = 0; i < sz; i++)
//	{
//		arr[i] = arr2[k++];
//	}
//}
//int main()
//{
//	int arr[50];
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	int tmp[50] = { 0 };
//	int start = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//准备工作分界线---------------
//	change(arr,n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int del = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	scanf("%d", &del);
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] == del)
//		{
//			for (int j = i; j < 9; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			arr[9] = 0;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}