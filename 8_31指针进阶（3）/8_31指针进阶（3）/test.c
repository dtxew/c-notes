#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int cmp_int(const void *e1, const void *e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////
////
////
//void printArr(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	printArr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//
//int cmp_by_name(const void *e1,const void *e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//
//void test2()
//{
//	struct Stu s[3] = { {"张三",15},{"李四",30},{"王五",10}};
//	//名字排序
//	//qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_by_name);
//	//年龄排序
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_by_age);
//}

//void Swap(char* buf1, char* buf2, unsigned width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, unsigned num, unsigned width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width ,width);
//			}
//		}
//	}
//}
//
//void test3()
//{
//	//自定义的bubble_sort替换qsort,回调函数
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	printArr(arr, sz);
//}
//
//
//
//int main()
//{
//
//	//test1();
//
//	//test2();
//
//	test3();
//	
//	system("pause");
//	return 0;
//}

//以下是作业部分

void printArr(int* nums, int numSize)
{
	for (int i = 0; i < numSize; i++)
	{
		printf("%d ", nums[i]);
	}
}

int cmp_int(const void* e1, const void* e2)
{
	//return (int*)e1 - (int*)e2;
	return (*(int*)e1 - *(int*)e2);
}

void _swap(char* e1, char* e2 ,unsigned width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, unsigned numSize, unsigned width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < numSize - 1; i++)
	{
		int j = 0;
		for (j = 0; j < numSize - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				_swap((char*)base + j * width, (char*)base + (j + 1) * width ,width);
			}
		}
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
	printArr(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}

