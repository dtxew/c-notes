#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//*(char*)dst+count=*(char*)src+count
//上一个项目memmove的实现的关键语句

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	memset(arr, 1, sizeof(int) * 5);
//	perror("test");//打印加上信息的错误信息
//	return 0;
//}

//电脑没电了，最近几天没多少课堂代码了

//9.17

//#pragma pack(1)
//#include<stddef.h>
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//
//int main()
//{
//
//	//printf("%d\n", sizeof(struct S));
//	printf("%u\n", offsetof(struct S, b));
//	printf("%u\n", offsetof(struct S, c));
//	return 0;
//}

//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//#define RED 1
//#define BLUE 2
////较麻烦
//// 
//enum Sex
//{
//	MALE = 10,
//	FAMALE,
//	SECRET
//};
//
//int main()
//{
//	printf("%d\n", FAMALE);
//	enum Sex you = FAMALE;
//	if (you == FAMALE)
//		printf("你是女生！\n");
//	printf("%d\n", sizeof(enum Sex));
//	return 0;
//}

union Un
{
	char a;
	int b;
}u;

int main()
{
	printf("%d\n", sizeof(union Un));
	printf("%d\n", sizeof(u.a));
	printf("%d\n", sizeof(u.b));
	printf("%p\n", &(u.a));
	printf("%p\n", &(u.b));
	printf("%p\n", &u);
	u.b = 0x11223344;
	u.a = 0x55;
	printf("%x\n", u.b);
	return 0;
}

