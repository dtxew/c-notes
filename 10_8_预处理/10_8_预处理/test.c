#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#define reg register
//#define do_forever for(;;)
//#define CASE break;case
//
//int main()
//{
//	//reg int i = 0;
//	//do_forever;
//
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//		CASE 2:
//			CASE 3:
//
//	}
//	return 0;
//}

////#define square(x) x*x
////#define square(x) (x)*(x)
//#define square(x) ((x)*(x))
//
//int main()
//{
//	int x = 5;
//	printf("%d\n", square(x + 1));
//	return 0;
//}


//#define PRINT(x,FORMAT) printf("the value of "#x" is "FORMAT"\n",x)
//
//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class1 = 100;
//	printf("%d\n", CAT(class, 1));
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("%d\n", m);
//	return 0;
//}
//#include<stdlib.h>
//#define MALLOC(num,type) (type*)malloc(sizeof(type)*num)

////#define DEBUG
//
//int main()
//{
//#ifdef DEBUG
//	printf("hh\n");
//#endif
//
//	return 0;
//}

//int main()
//{
////#if 1
////	printf("hehe");
////#endif
////#if 1==1
////	printf("hh");
////#elif 1==2
////	printf("ha");
////#else
////	printf("hei");
////#endif
//
//	return 0;
//}

////*********************作业分界线
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>

//enum State
//{
//	VAILD,
//	INVAILD
//};
//
//enum State State = INVAILD;
//int my_atoi(const char* str)
//{
//	//NULL
//	assert(str);
//	//空字符
//	if (!(*str))
//	{
//		return 0;
//	}
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	//识别符号
//	int flag = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//开始转化
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;//异常返回
//			}
//			str++;
//		}
//		else
//		{
//			State = VAILD;
//			return (int)ret;
//		}
//	}
//	State = VAILD;
//	return (int)ret;
//}
//
//
//int main()
//{
//	int ret = my_atoi("123abc45");
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1 )== 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	int m = 0;
//	int n = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos & 1) == 1)
//		{
//			m ^= arr[i];
//		}
//		else
//		{
//			n ^= arr[i];
//		}
//	}
//
//	printf("%d,%d\n", m, n);
//	return 0;
//}

#define SWAP_BIT(x) ((x) = ((x&0xaaaaaaaa)>>1)+((x&0x55555555)<<1))

