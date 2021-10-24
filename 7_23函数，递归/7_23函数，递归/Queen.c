#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#define LEN 8
//
//void Print(char board[LEN][LEN])
//{
//	for (int i = 0; i < LEN; i++)
//	{
//		for (int j = 0; j < LEN; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void BoardInit(char board[LEN][LEN])
//{
//	for (int i = 0; i < LEN; i++)
//	{
//		for (int j = 0; j < LEN; j++)
//		{
//			board[i][j] = '*';
//		}
//	}
//}
//
//bool isAttack(char board[LEN][LEN], int attack[LEN][LEN])
//{
//	for (int i = 0; i < LEN; i++)
//	{
//		for (int j = 0; j < LEN; j++)
//		{
//			if (board[i][j] == 'Q' && attack[i][j] == 1)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void PointAttack(char board[LEN][LEN], int attack[LEN][LEN])
//{
//	for (int i = 0; i < LEN; i++)
//	{
//		for (int j = 0; j < LEN; j++)
//		{
//			if (board[i][j] == 'Q')
//			{
//				int k = 0, l = 0;
//				for (k = 0; k < LEN; k++)
//				{
//					attack[i][k] = 1;
//				}
//				for (k = 0; k < LEN; k++)
//				{
//					attack[k][j] = 1;
//				}
//				k = i;
//				l = j;
//				while (k >= 0 && k < LEN && l >= 0 && l < LEN)
//				{
//					board[k][l] = 1;
//					k--;
//					l--;
//				}
//				while (k >= 0 && k < LEN && l >= 0 && l < LEN)
//				{
//					board[k][l] = 1;
//					k++;
//					l++;
//				}
//				while (k >= 0 && k < LEN && l >= 0 && l < LEN)
//				{
//					board[k][l] = 1;
//					l++;
//					k--;
//				}
//				while (k >= 0 && k < LEN && l >= 0 && l < LEN)
//				{
//					board[k][l] = 1;
//					l--;
//					k++;
//				}
//
//			}
//		}
//	}
//}
//
//
//void func(char board[LEN][LEN],int attack[LEN][LEN],int r)
//{
//	
//
//
//	if (r == LEN)
//	{
//		Print(board);
//		return;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < LEN; i++)
//		{
//			if (isAttack(board,attack))
//			{
//				board[r][i] = 'Q';
//				PointAttack(board,attack);
//				func(board,attack,r+1);
//				board[r][i] = '*';
//			}
//		}
//	}
//}
//
//int main()
//{
//	char board[LEN][LEN];
//	BoardInit(board);
//	int attack[LEN][LEN] = { 0 };
//	func(board,attack,0);
//	return 0;
//}
#define length 8
int count = 0;  // 计数 
int ms[length][length] = { 0 };

// 判断将皇后放在(a, b)位置上是否合法 
int isTrue(int a, int b)
{
    int t;
    // 向上判断 
    for (t = a - 1; t >= 0; t--)
    {
        if (ms[t][b] == 1)
            return 0;
    }

    // 向左判断左
    for (t = b - 1; t >= 0; t--) {
        if (ms[a][t] == 1)
            return 0;
    }

    int m, n;
    // 向左上判断 
    for (m = a - 1, n = b - 1; m >= 0 && n >= 0; m--, n--)
    {
        if (ms[m][n] == 1)
            return 0;
    }
    // 向右上判 
    for (m = a - 1, n = b + 1; m >= 0 && n < length; m--, n++)
    {
        if (ms[m][n] == 1)
            return 0;
    }
    return 1;
}

// 打印八皇后 
void print() {
    count++;
    printf("%d:\n", count);
    int a, b;
    for (a = 0; a < length; a++) // 行 
    {
        for (b = 0; b < length; b++) // 列 
        {
            if (ms[a][b] == 0)
            {
                printf("* ");
            }
            else if (ms[a][b] == 1)
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

// 递归调用 m表示层数 
void fun(int m) {
    if (m == length)
    {
        print();    // 输出 
        return;     // 递归出口
    }
    int i;
    for (i = 0; i < length; i++)
    {
        if (isTrue(m, i))    // 回溯算法 
        {
            ms[m][i] = 1;   // 10表示此位置有皇后
            fun(m + 1);       // 递归调用 
            ms[m][i] = 0;   // 0表示此位置无皇后 
        }
    }
}

int main(void)
{
    fun(0);
    return 0;
}
