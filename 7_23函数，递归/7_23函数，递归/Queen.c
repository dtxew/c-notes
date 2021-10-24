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
int count = 0;  // ���� 
int ms[length][length] = { 0 };

// �жϽ��ʺ����(a, b)λ�����Ƿ�Ϸ� 
int isTrue(int a, int b)
{
    int t;
    // �����ж� 
    for (t = a - 1; t >= 0; t--)
    {
        if (ms[t][b] == 1)
            return 0;
    }

    // �����ж���
    for (t = b - 1; t >= 0; t--) {
        if (ms[a][t] == 1)
            return 0;
    }

    int m, n;
    // �������ж� 
    for (m = a - 1, n = b - 1; m >= 0 && n >= 0; m--, n--)
    {
        if (ms[m][n] == 1)
            return 0;
    }
    // �������� 
    for (m = a - 1, n = b + 1; m >= 0 && n < length; m--, n++)
    {
        if (ms[m][n] == 1)
            return 0;
    }
    return 1;
}

// ��ӡ�˻ʺ� 
void print() {
    count++;
    printf("%d:\n", count);
    int a, b;
    for (a = 0; a < length; a++) // �� 
    {
        for (b = 0; b < length; b++) // �� 
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

// �ݹ���� m��ʾ���� 
void fun(int m) {
    if (m == length)
    {
        print();    // ��� 
        return;     // �ݹ����
    }
    int i;
    for (i = 0; i < length; i++)
    {
        if (isTrue(m, i))    // �����㷨 
        {
            ms[m][i] = 1;   // 10��ʾ��λ���лʺ�
            fun(m + 1);       // �ݹ���� 
            ms[m][i] = 0;   // 0��ʾ��λ���޻ʺ� 
        }
    }
}

int main(void)
{
    fun(0);
    return 0;
}
