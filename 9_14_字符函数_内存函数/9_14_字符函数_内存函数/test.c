#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//char* my_strcat(char* dst, const char* src)
//{
//	
//	assert(dst && src);
//	char* tmp = dst;
//	while (*dst)
//	{
//		dst++;
//	}
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//
//
//int main()
//{
//	char arr1[20] = "abc";
//	const char* arr2 = "efg";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2&& s1 && s2)
//	{
//		/*if (*s1 == '\0')
//			return 0;*///判断相等的情况,abc和abc
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//	return 1;
//	//else if (*s1 < *s2)
//	//	return -1;
//	//else
//	//	return 0;
//	return *s1 - *s2;
//}
//
//int main()
//{
//	const char* arr1 = "abcdef";
//	const char* arr2 = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strncpy(char* dst, const char* src, size_t n)
//{
//	assert(dst && src);
//	char* ret = dst;
//	while (*src && n)
//	{
//		*dst = *src;
//		dst++;
//		src++;
//		n--;
//	}
//	if (n)
//	{
//		*dst = '\0';
//		dst++;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xxxx";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	if (!(*s2))
//	{
//		return s1;
//	}
//	char* st1;
//	char* st2;
//	//起始位置
//	char* cur = s1;
//	//每一次尝试匹配的位置
//	//abbbcdef
//	//bbc
//	while (*cur)
//	{
//		st1 = cur;
//		st2 = s2;
//
//		while (*st1 && *st2 && *st1 == *st2)
//		{
//			st1++;
//			st2++;
//		}
//		if (!(*st2))
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "i am a good student, bit student!";
//	char arr2[] = "student";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("none");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "12344@133.356";
//	char arr2[100] = { 0 };
//	char* sep = "@.";
//	strcpy(arr2, arr1);
//	char* ret = NULL;
//	for (ret = strtok(arr2, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//void* my_memcpy(void* dst, const void* src, size_t count)
//{
//	assert(dst && src);
//	//1b1b的拷贝
//	void* ret = dst;
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;//左边万能接收
//		
//	}
//	return dst;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(int) * 10);
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void* my_memmove(void* dst, const void* src, size_t count)
//{
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//my_memcpy(arr + 2, arr, 16);
//	//只能用memmove
//	my_memmove(arr + 2, arr, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//---------------------作业分界线

//void my_memmove_test()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	my_memmove(arr, arr + 2, sizeof(int) * 5);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
void* my_memmove(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	if (*(char*)dst < *(char*)src)
	{
		while (count--)
		{
			*(char*)dst = *(char*)src;
			(char*)dst += 1;
			(char*)src += 1;
		}
	}
	else
	{
		(char*)dst += count - 1;
		(char*)src += count - 1;
		//-1原因是count进去循环就会马上减掉，
		while (count--)
		{
			*(char*)dst = *(char*)src;
			(char*)dst -= 1;
			(char*)src -= 1;
		}
	}
	return ret;
}


void* my_memcpy(void* dst, const void* src, size_t count)
{
	assert(dst && src);

	void* ret = dst;

	int i = 0;
	for (i = count; i > 0; i--)
	{
		*(char*)dst = *(char*)src;
		//dst = (char*)dst + 1;
		//src = (char*)src + 1;
		(char*)dst += 1;
		(char*)src += 1;
	}
	return ret;
}

char* my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);
	char* cur = s1;//记录匹配起始位置
	char* cur1 = cur;//匹配原字符串用的指针
	char* cur2 = s2;//记录匹配字符起始位置
	while (*cur1 && *cur2)
	{
		cur1 = cur;
		cur2 = s2;
		while (*cur1 == *cur2 && *cur1 && *cur2)
		{
			cur1++;
			cur2++;
		}
		if (!(*cur2))
			return cur;
		cur++;
	}

	return NULL;
}

char* my_strcat(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;
	while (*dst)
		dst++;
	while (*dst++ = *src++)
		;
	return ret;
}

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
		
	return *s1 - *s2;
}

char* my_strcpy(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;
	while (*dst++ = *src++)
		;
	return ret;
}

size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str)
	{
		
		count++;
		str++;
	}
	return count;
	
}

void my_memmove_test()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//my_memmove(arr, arr + 2, sizeof(int) * 5);
	my_memmove(arr + 2, arr, sizeof(int) * 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

void my_memcpy_test()
{
	int arr1[20] = { 0 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr1, arr2, sizeof(int) * 10);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr1[i]);
	}
}

void my_strstr_test()
{
	char arr1[] = "I am a student,bit student!";
	char arr2[] = "student";
	char arr3[] = "abbbcdef";
	char arr4[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	char* ret2 = my_strstr(arr3, arr4);
	printf("%s\n", ret);
	printf("%s\n", ret2);
}



void my_strcat_test()
{
	char arr1[20] = "hello ";
	char arr2[] = "world!";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}

void my_strcmp_test()
{
	char* arr1 = "abcdef";
	char* arr2 = "abq";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
}

void my_strcpy_test()
{
	char arr1[100] = "hello world!";
	char arr2[] = "xxxxxxx";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
}

void my_strlen_test()
{
	char arr1[] = "hello world!";
	int ret = my_strlen(arr1);
	printf("%d\n", ret);
}


int main()
{

	//测试用例
	//my_memmove_test();
	//my_memcpy_test();
	//my_strstr_test();
	//my_strcat_test();
	//my_strcmp_test();
	//my_strcpy_test();
	//my_strlen_test();
	return 0;
}

