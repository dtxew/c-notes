#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	a = ++b, ++c;
//
//	return 0;
//}
//void reverse_string(char* str)
//{
//	//非递归
//	int len = strlen(str);

//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//
//
//	
//}


//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    int tmp = 0;
//    scanf("%d%d", &n1, &n2);
//    int r = 0;
//    int a = (n1 > n2 ? n1 : n2);
//    int b = (n1 > n2 ? n2 : n1);
//    //核心所在
//    while (a % b)
//    {
//        r = a % b;
//        a = b;
//        b = r;
//    }
//    int a1 = n1 / b;
//    int b1 = n2 / b;
//    int mul = a1 * b1 * b;
//    int sum = mul + b;
//    printf("%d\n", sum);
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i != 0 && i != n - 1)
//			{
//				if (j != 0 && j != n - 1)
//				{
//						printf("  ");
//						continue;
//				}
//			}
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int arr[7] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	float sum = 0.0;
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] == max || arr[i] == min)
//			continue;
//		else
//		{
//			sum += arr[i];
//		}
//	}
//	float ave = sum / 5.0;
//	printf("%.2f\n", ave);
//	return 0;
//}

