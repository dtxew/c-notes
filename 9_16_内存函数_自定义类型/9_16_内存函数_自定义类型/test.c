#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//*(char*)dst+count=*(char*)src+count
//��һ����Ŀmemmove��ʵ�ֵĹؼ����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	memset(arr, 1, sizeof(int) * 5);
//	perror("test");//��ӡ������Ϣ�Ĵ�����Ϣ
//	return 0;
//}

//����û���ˣ��������û���ٿ��ô�����

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
////���鷳
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
//		printf("����Ů����\n");
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

