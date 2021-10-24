#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"//函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(10, 20);
//	printf("%d\n", ret);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//int my_strlen(const char* str)
//{
//
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//	//递归实现，没有临时变量
//	//(*str + 1),已经不是地址了，第一次敲的错误
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	
//	return 0;
//}
//long F(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * F(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = F(n);
//	printf("%ld\n", ret);
//	return 0;
//}
//int count = 0;
//long Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//long Fib(int n)
//{
//	//迭代循环方式
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = Fib(n);
//	/*printf("count:%d\n", count);*/
//	printf("%ld\n", ret);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 1234;
//	print(n);
//	return 0;
//}

//long F(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * F(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = F(n);
//	printf("%ld\n", ret);
//	return 0;
//}





//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}



//int main()
//{
//	char ch[] = "hello world";
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//*******************************************************************************
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//void reverse_string(char* str)
//{
//	//(交换)!!!第一和最后，然后返回第一
//	int len = my_strlen(str);
//	char* tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str) > 1)
//		reverse_string(str + 1);
//	str[len - 1] = tmp;
//	
//
//
//
//}
//int main()
//{
//	char* ch = "abcdef";
//	reverse_string(ch);
//	printf("%s\n", ch);
//	return 0;
//}
//*******************************听评讲**************************
//int DigitSum(int n)
//{
//
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}



//double power(double num, int exp)
//{
//	if (exp > 0)
//	{
//		if (exp == 0)
//			return 1;
//		else
//			return num * power(num, exp - 1);
//	}
//	else if (exp == 0)
//	{
//		if (num == 0.0)
//			printf("error\n");
//		else
//			return 1.0;
//
//	}
//	else
//	{
//		if (exp == 0)
//			return 1;
//		else
//			return (1.0) / num * power(num, exp + 1);
//	}
//}
//int main()
//{
//	double num = 0.0;
//	int exp = 0;
//	while (scanf("%lf%d", &num, &exp) == 2)
//	{
//		printf("%lf\n", power(num, exp));
//	}
//	printf("QUIT\n");
//
//	return 0;
//}
//long fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//long fib1(int n)
//{
//	long a = 1;
//	long b = 1;
//	long c = 0;
//	for (int i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;//这里如果改变调换顺序，回去自己认真验算
//		
//	}
//	return c;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = fib1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//汉诺塔问题

//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		printf("%c>%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("%c>%c\n", a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}