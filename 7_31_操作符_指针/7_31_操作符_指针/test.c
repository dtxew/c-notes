#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);//对c再进行整型提升
//	//111111111111....
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	float r = a + f;
//
//}

//int* test()
//{
//	int a = 10;
//	return &a;//指针指向空间释放
//}
//
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			sum += (pow(10, j) * n);
//		}
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}
#include<math.h>


int num_count(n)
{
	for (int i = 1; i <= 6; i++)
	{
		if (n / 10 == 0)
			return i;
		n /= 10;
	}
	
}
int main()
{
	for (int i = 0; i < 100000; i++)
	{
		int count = num_count(i);
		int sum = 0;
		
		for (int j = count-1; j >= 0; j--)
		{
			int ret = i / pow(10, j);
			sum += pow(ret, count);
			i %= (int)pow(10, j);
			
		}
		if (i == sum)
			printf("%d ", i);
		
	}
	return 0;
}
