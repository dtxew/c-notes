#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int grade;
//};
//
//typedef struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//}Book;
//
//
//int main()
//{
//	struct stu s1 = { "张三",18,"男",100 };
//	Book s2 = { "C语言程序设计","谭浩强",30.00 };
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//
//};
//
//struct T
//{
//	struct S s;
//	char name[20];
//};
//int main()
//{
//	struct T t1 = { {1,2},"张三" };
//	printf("%d %d %s\n", t1.s.a, t1.s.b, t1.name);
//	struct T* pt = &t1;
//	printf("%d %d %s\n", pt->s.a, pt->s.b, pt->name);
//	return 0;
//}

//struct S
//{
//	int arr[100];
//	int num;
//	char ch;
//	double d;
//};
//void print1(struct S ss)
//{
//	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d ", ps->arr[0]);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5},100,'w',3.12 };
//	print1(s);
//	print2(&s);
//	return 0;
//}


//void str_reverse(char* str, int sz)
//{
//	char* left = str;
//	char* right = str + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//
//{
//	char ch[100];
//	gets(ch);
//	int sz = strlen(ch);
//	str_reverse(ch, sz);
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (int j = 6 - i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 1 + 2 * i; k > 0; k--)
//		{
//			
//			printf("*");
//		}
//		for (int j = 6 - i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	printf(" ");
//	for (i = 0; i <= 13; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (i = 5; i >= 0; i--)
//	{
//		for (int j = 6 - i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 1 + 2 * i; k > 0; k--)
//		{
//
//			printf("*");
//		}
//		for (int j = 6 - i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int price = 0;
	scanf("%d", &price);
	int count = price;
	int count1 = count;
	int sum_count = 0;
	while (count1)
	{
		if (count1 == 2)
		{
			sum_count++;
			break;
		}
		sum_count += 2;
		
		count1 -= 2;
		
	}
	printf("%d\n", sum_count + count);
	return 0;
}
