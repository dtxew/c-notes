#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int a = 0;
//	//scanf("%d", &a);
//	//int c = a & 1;//�ж����λ
//	//printf("%d\n", c);
//	int a = 0;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		a & 1;
//		if (a & 1 == 1)
//			count++;
//		a >>= 1;
//
//
//	}//�ж϶�������1�ĸ���
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	short s = 2;
//	printf("%d\n", sizeof(s + a));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	//�ѵڶ�λ0��Ϊ1
//	int a = 13;
//	a |= (1 << 1);
//	printf("%d\n", a);
//	a &= ~(1 << 1);//��ԭ
//	printf("%d\n", a);
//	//00000000000000000000000000001101
//	//1<<1
//	//00000000000000000000000000000010����
//	//00000000000000000000000000001111
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = ++a;
//	////int b = a++;
//
//	//printf("%d,%d\n", a, b);
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		int d = c & 1;
//		
//		if (d == 1)
//		{
//			count++;
//		}
//		c >>= 1;//c>>1��Ӱ��c��ֵ���൱��c+1��c=c+1������
//	}
//	printf("%d\n", count);
//	return 0;
//}
//void to_binary(int n)
//{
//	if (n <= 0)
//		return;
//	else
//	{
//		to_binary(n / 2);
//		printf("%d", n % 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 0)
//		n = -n;
//	to_binary(n);
//
//	return 0;
//}
//int count_binary(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		int c = n & 1;
//		if (c == 1)
//			count++;
//		n >>= 1;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_binary(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d\n", a, b);
//	return 0;
//}