#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	if (n == 2)
//		return 1;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		
//		if (n % i == 0)
//		{
//			return 0;
//			
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	
//	for (int i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int is_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//	//return if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)最简化
//}
//int main()
//{
//	for (int i = 1000; i < 2000; i++)
//	{
//		if (is_year(i) == 1)
//			printf("%d ", i);
//		else
//			;
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
////int binary_search(int arr[], int k, int sz,int left,int right)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//TDD测试驱动开发思想
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("no\n");
//	}
//	else
//		printf("找到了，在：%d\n", ret);
//	return 0;
//}
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int n = 0;
//	Add(&n);
//	printf("%d\n", n);
//	Add(&n);
//	printf("%d\n", n);
//
//	return 0;
//}

//一个函数不能返回多个结果

//exec((vl，v2)，(v3，v4)，v5，v6)中，逗号表达式（v1,v2）始终表示后面的值
//void change(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("before:%d,%d\n", a, b);
//	change(&a, &b);
//	printf("after:%d,%d\n", a, b);
//	return 0;
//}
//void mul_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul_table(n);
//	return 0;
//}