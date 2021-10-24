#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>

//三步逆序
//void reverse(char* l, char* r)
//{
//	assert(l && r);
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	
//	reverse(arr, arr + k - 1);
//	reverse(arr + k , arr + len - 1);
//	reverse(arr, arr + len - 1);
//}

//暴力求解太简单，略

//int main()
//{
//	char arr[] = "abcd";
//	int k = 2;
//	k %= strlen(arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//bool is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//			return true;
//	}
//	return false;
//	
//}

//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	printf("%d\n", is_left_move(arr1, arr2));
//}

//bool is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return false;
//	strncat(arr1, arr1, len1);
//	if (NULL == strstr(arr1, arr2))
//		return false;
//	else
//		return true;
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	printf("%d\n", is_left_move(arr1, arr2));
//}

//矩阵查找

//bool find_key(int (*arr)[3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y < c)
//	{
//		if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y] > k)
//			y--;
//		else
//		{
//			printf("%d,%d\n", x, y);
//			return true;
//		}
//			
//	}
//	return false;
//}

//void find_key(int(*arr)[3], int k, int* x, int* y)
//{
//	//可以返回下标
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 2;
//	int x = 3;
//	int y = 3;
//	int ret = find_key(arr, k, &x, &y);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//int sz = strlen("abcdef");
//	size_t sz = strlen("abcdef");
//	printf("%u\n", sz);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("1\n");
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* tmp = arr1;
//	while (*arr1++ = *arr2++)
//	{
//
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}