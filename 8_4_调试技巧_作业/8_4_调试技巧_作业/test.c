#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void my_strcpy(char* dst,char* src)
//{
//	while(*src!='\0')
//	{
//
//
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	*dst = *src;//放置\0
//}


//void my_strcpy(char* dst, char* src)
//{
//	while (*src != '\0')
//	{
//		*dst++ = *src++;//简化
//
//	}
//	*dst = *src;//放置\0
//}

//void my_strcpy(char* dst, char* src)
//{
//	while (*dst++ = *src++)//表达式的结果为dst的字符，'\0'ASC值为0，自动停止
//	{
//		;
//	}
//}
//#include<assert.h>
//void my_strcpy(char* dst, char* src)
//{
//	//if (src == NULL||dst==NULL)//防止传入空指针，保护程序
//	//{
//	//	return;
//	//}
//	/*assert(src != NULL);
//	assert(dst != NULL);*///为假报错
//	//assert(src);
//	//assert(dst);
//	assert(dst && src);
//	while (*dst++ = *src++)//表达式的结果为dst的字符，'\0'ASC值为0，自动停止
//	{
//		;
//	}
//}

//#include<assert.h>
//void my_strcpy(char* dst, const char* src)//保护src
//{
//	//if (src == NULL||dst==NULL)//防止传入空指针，保护程序
//	//{
//	//	return;
//	//}
//	/*assert(src != NULL);
//	assert(dst != NULL);*///为假报错
//	//assert(src);
//	//assert(dst);
//	assert(dst && src);
//	while (*dst++ = *src++)//表达式的结果为dst的字符，'\0'ASC值为0，自动停止
//	{
//		;
//	}
//}

//#include<assert.h>
//char* my_strcpy(char* dst, const char* src)//保护src
//{
//	char* ret = dst;//模拟库函数，第一个字符地址
//	//if (src == NULL||dst==NULL)//防止传入空指针，保护程序
//	//{
//	//	return;
//	//}
//	/*assert(src != NULL);
//	assert(dst != NULL);*///为假报错
//	//assert(src);
//	//assert(dst);
//	assert(dst && src);
//	while (*dst++ = *src++)//表达式的结果为dst的字符，'\0'ASC值为0，自动停止
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[10] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	const num = 10;
//	num = 20;
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	//const修饰指针,*z在左，右？
//	const int* p = &num;
//	//int const * p
//	//int *const p
//	*p = 20;
//}
//#include<assert.h>
//unsigned my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//		
//	}
//	return count;
//}
//
//
//int main()
//{
//	char* arr ="hello world";
//	unsigned ret = my_strlen(arr);
//	printf("%u\n", ret);
//
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);//去掉最右边的1
//	}
//	return count;
//	//n = n & (n - 1);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_bit_one(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<assert.h>
//unsigned my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//

//int main()
//{
//	char* arr = "hello world!";
//	unsigned ret = my_strlen(arr);
//	printf("%u\n", ret);
//	return 0;
//}
//#include<assert.h>
//void my_strcpy(char* dst, const char* src)
//{
//	assert(dst && src);
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}



//int main()
//{
//	char arr1[] = "hello";//这里arr1必须可以修改，所以不能写成char* arr1
//	char* arr2 = NULL;
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


