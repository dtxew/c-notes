#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	const char *p
//	char* p = "hello";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char* str3 = "hello";
//	char* str4 = "hello";
//	if (str1 == str2)
//	{
//		printf("str1=str2\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3=str4\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//p[i]=*(p+i)
//int main()
//{
//	const char* arr[5] = { "hello","world","bit","haha","hehe" };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int(*p)[10] = arr;
//	return 0;
//}

//int main()
//{
//	int* arr[10];
//	int* (*p)[10] = &arr;
//	return 0;
//}

//void print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*(p + 0) + i));//想象成一行二维数组
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(&arr, sz);
//
//	return 0;
//}

//void print(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}
//#include<assert.h>
//char* left_reverse(char* arr, int n, int sz)
//{
//	assert(arr);
//	char* start = arr;
//	for (int i = 0; i < n; i++)
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < sz - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//
//		}
//		arr[sz - 2] = tmp;
//	}
//	return (start);
//
//}
//
//
//int main()
//{
//	char arr[] = "ABCD";
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	left_reverse(arr, n, sz);
//	printf("%s\n", arr);
//	return 0;
//}



#include<assert.h>
#include<string.h>
int is_left_reverse(char* arr1, const char* arr2, int sz)
{
	assert(arr1 && arr2);
	
	for (int n = 1; n < sz - 1; n++)//修改的字符，暴力试错法
	{

		
		char tmp = arr1[0];
		for (int j = 0; j < sz - 1; j++)
		{
			arr1[j] = arr1[j + 1];

		}
		arr1[sz - 2] = tmp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}

	

	
	return 0;
}

int is_right_reverse(char* arr1, const char* arr2, int sz)
{
	assert(arr1 && arr2);
	for (int n = 1; n < sz - 1; n++)
	{
		char tmp = arr1[sz - 2];
		for (int j = sz - 1; j > 0 ; j--)
		{
			arr1[j] = arr1[j - 1];
		}
		arr1[0] = tmp;
		arr1[sz - 1] = '\0';
		if ((strcmp(arr1, arr2)) == 0)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	char arr1[] = "AABCD";
	const char* arr2 = "DAABC";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int ret_left = is_left_reverse(arr1, arr2, sz);
	int ret_right = is_right_reverse(arr1, arr2, sz);
	if (ret_left == 1 || ret_right == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}