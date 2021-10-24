#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	char vowel[] = "aeiouAEIOU";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == vowel[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("vowel\n");
//		}
//		else
//		{
//			printf("consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//strstr查找字符串

//int main()
//{
//	int n = -1;
//	printf("%u\n", n);
//	return 0;
//}

//#include<math.h>
//int num_count(int n)
//{
//	int cnt = 0;
//	while (n)
//	{
//		cnt++;
//		n /= 10;
//	}
//	return cnt;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int cnt = num_count(i);
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, cnt);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
////总结：用while而不是for循环

//test.c
//使用这段代码，然后开启反汇编
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;

}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    c = Add(a, b);
    printf("%d\n", c);
    return 0;
}