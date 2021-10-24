#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>
#include<math.h>

//int main()
//{
//
//	//int* arr = (int*)malloc(sizeof(int) * 10);
//	int* arr = (int*)calloc(10, sizeof(int));
//	int* tmp = (int*)realloc(20 * sizeof(int));
//	if (!tmp)
//	{
//		printf("%s\n", strerror(errno));
//		exit(-1);
//	}
//	else
//	{
//		arr = tmp;
//	}
//	if (!arr)
//	{
//		//printf("fail\n");
//		//exit(-1);
//		printf("%s\n", strerror(errno));
//		exit(-1);
//	}
//	else
//	{
//		//code
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//---------------------作业分界线---------------------------------

//long long my_atoi(const char* str)
//{
//	assert(str);
//	int end = strlen(str) - 1;
//	long long num = 0;
//	int count = 0;
//	while (end >= 0)
//	{
//		if (!end)//正负号判断
//		{
//			if (str[end] == '-')
//			{
//				num = -num;
//				break;
//			}
//		}
//		num += (str[end] - '0') * (int)pow(10, count);
//		end--;
//		count++;
//	}
//	return num;
//}
//
//
//
//int main()
//{
//	char num[] = "-12345";
//	int ret = my_atoi(num);
//	printf("%d\n", ret);
//	
//
//	return 0;
//}

//char* my_strncat(char* dst, const char* src, size_t count)
//{
//	assert(dst && src);
//	char* tmp = dst;
//	char* start = dst;
//	while (*dst)
//	{
//		dst++;
//	}
//	while (count && *src)
//	{
//		*dst = *src;
//		dst++;
//		src++;
//		count--;
//	}
//	while (count)
//	{
//		*dst = '\0';
//		dst++;
//		count--;
//	}
//
//	return tmp;
//}
//
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world!hahaha";
//	my_strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncpy(char* dst, const char* src, size_t count)
//{
//	assert(dst && src);
//	char* tmp = dst;
//	while (count && *src)
//	{
//		*dst = *src;
//		dst++;
//		src++;
//		count--;
//	}
//	while (count)
//	{
//		*dst = '\0';
//		dst++;
//		count--;
//	}
//	return dst;
//}
//
//
//int main()
//{
//	char arr1[100] = "xxxxxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "helloworld!hahahaha";
//	my_strncpy(arr1, arr2 ,11);
//	printf("%s\n", arr1);
//	return 0;
//}

int* GetSingleTwoNums(int* nums, int numsize)
{
	int* ret = (int*)calloc(2, sizeof(int));
	if (!ret)
	{
		return NULL;
	}
	//************************
	
	

	//************************
	return ret;
}


int main()
{
	int arr[] = { 1,2,3,4,3,4,2,1,6,5,6,8 };
	int* ret = GetSingleTwoNums(arr, sizeof(arr) / sizeof(arr[0]));
	if (!ret)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", ret[i]);
	}
	free(ret);
	ret = NULL;
	return 0;
}