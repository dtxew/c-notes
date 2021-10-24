#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//
//	fseek(pf, 2, SEEK_SET);
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%d\n", ftell(pf));
//
//	fseek(pf, -2, SEEK_CUR);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	char ch = 0;
//	while (ch = fgetc(pf) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////·Ö½çÏß*********************************************


