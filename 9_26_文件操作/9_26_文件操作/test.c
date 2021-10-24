#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("D:\\东条希尔薇\\bit-practice\\直播课\\9_26_文件操作\\data.txt", "w");
//
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	
//	else
//	{
//
//		fprintf(pf, "helloworld!\n");
//		
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("D:\\东条希尔薇\\bit-practice\\直播课\\9_26_文件操作\\data.txt", "r");
//
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//
//	else
//	{
//		char str[100] = { 0 };
//		fgets(str, 6, pf);//会在最后放\0,实际读取n-1有效字符
//		printf("%s\n", str);
//		fgets(str, 6, pf);
//		printf("%s\n", str);
//		
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct S
//{
//	int n;
//	double d;
//}S;
//
//int main()
//{
//	S s = { 100,3.14 };
//	FILE* pf = fopen("D:\\东条希尔薇\\bit-practice\\直播课\\9_26_文件操作\\data.txt", "w");
//
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	
//	else
//	{
//		fprintf(pf, "%d\n", s.n);
//		fprintf(pf, "%lf\n", s.d);
//		
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("D:\\东条希尔薇\\bit-practice\\直播课\\9_26_文件操作\\data.txt", "r");
//
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//
//	else
//	{
//		int a = 0;
//		double d = 0;
//		fscanf(pf, "%d", &a);
//		fscanf(pf, "%lf", &d);
//		printf("%lf\n", a * d);
//		
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("D:\\东条希尔薇\\bit-practice\\直播课\\9_26_文件操作\\data.txt", "wb");
//
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	
//	else
//	{
//
//		int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//		fwrite(arr, sizeof(int), 5, pf);
//		
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	double d = 3.14;
//	char str[100] = { 0 };
//	sprintf(str, "%d %lf", a, d);
//	printf("%s\n", str);
//	return 0;
//}

