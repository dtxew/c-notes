#define _CRT_SECURE_NO_WARNINGS 1
#include<limits.h>
#include<stdio.h>
//INT_MAX
//INT_MIN//limits.h

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[50];
//	int i = 0;
//	while (num)
//	{
//		arr[i] = num % 6;
//		i++;
//		num /= 6;
//	}//�洢ÿһλ
//	//���Ŷ�
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int c = 0;
//	int n1 = (m > n) ? n : m;
//	int m1 = (m > n) ? m : n;//���ģС��
//	while (c = m1 % n1)//շת�����
//	{
//		m1 = n1;
//		n1 = c;
//	}
//	//����С���������Լ��
//	int min = m * n / n1;//�������˻��ٳ������Լ��������С������
//	return 0;
//}

//int main()//����������,������ʱ���м����˿ո�
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)//���ո����һ����
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");//warning
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

struct stu
{
	char name[10];
	int age;
	char sex[5];
	double grade;
};

void print(struct stu* pb)
{
	printf("%d\n", pb->age);
}




int main()
{
	struct stu b = { "john",18,"men",100 };//����
	int a = b.age;//.������
	b.age = 19;
	printf("%d\n", a);
	print(&b);
	return 0;
}