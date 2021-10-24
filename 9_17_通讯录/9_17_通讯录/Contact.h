#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
#include<stdlib.h>

#define NAMEMAX 20
#define SEXMAX 5
#define TELEMAX 12
#define ADDRMAX 30
#define MAX 1000

#define DEFAULTSIZE 3

void menu();

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};



typedef struct PeoInfo
{
	char name[NAMEMAX];
	int age;
	char sex[SEXMAX];
	char tele[TELEMAX];
	char addr[ADDRMAX];
}PeoInfo;//һ���˵���Ϣ

//��̬�汾
//typedef struct Contact
//{
//	struct PeoInfo data[MAX];
//	int size;
//}Contact;//ͨѶ¼����

//��̬�汾
typedef struct Contact
{
	PeoInfo* data;
	int size;
	int capacity;
}Contact;//ͨѶ¼����

void InitContact(Contact* ps);

void AddContact(Contact* ps);

void ShowContact(Contact* ps);

void DelContact(Contact* ps);

void SearchContact(const Contact* ps);

void ModifyContact(Contact* ps);

enum ModifyOption
{
	EXIT_M,
	NAME,
	AGE,
	SEX,
	TELE,
	ADDR

};

void SortContact(Contact* ps);

void DestoryContact(Contact* ps);

//�ڶ����޸ģ��ļ���
//�˳����򱣴����ļ���
//����ͨѶ¼ʱ�������ļ���Ϣ

void SaveContact(Contact* ps);

void LoadContact(Contact* ps);