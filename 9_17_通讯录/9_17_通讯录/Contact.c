#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

//�޸ģ����Խ����Һ�����ɾ�����޸ģ����ң���װ,���ﲻʵ��

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(ps->data, ps->capacity * 2 * sizeof(PeoInfo));
		if (!tmp)
		{
			printf("��������\n");
			return;
		}
		else
		{
			ps->data = tmp;
			ps->capacity *= 2;

		}
	}
}

int FindContactByName(const Contact* ps, const char* name)
{
	assert(name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}

void menu()
{
	printf("****************************\n");
	printf("****1. add   2 . del********\n");
	printf("****3. search 4. modify*****\n");
	printf("****5. show    6. sort******\n");
	printf("*********0. exit ***********\n");
	printf("****************************\n");
}

//void InitContact(Contact* ps)
//{
//	ps->size = 0;
//	memset(ps->data, 0, sizeof(ps->data) );//ָ��Ѱ�Ҳ��ή����
//
//}

void InitContact(Contact* ps)
{
	//��̬�汾
	ps->size = 0;
	ps->data = (PeoInfo*)malloc(sizeof(PeoInfo) * DEFAULTSIZE);
	ps->capacity = DEFAULTSIZE;

	//�����ļ���Ϣ

	LoadContact(ps);
	
}

//void AddContact(Contact* ps)
//{
//	if (ps->size < MAX)
//	{
//		printf("���������֣�\n");
//		scanf("%s", ps->data[ps->size].name);
//		printf("���������䣺\n");
//		scanf("%d", &(ps->data[ps->size].age));//����ȡ��ַ��ע��
//		printf("�������Ա�\n");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("������绰��\n");
//		scanf("%s", ps->data[ps->size].tele);
//		printf("�������ַ��\n");
//		scanf("%s", ps->data[ps->size].addr);
//
//		ps->size++;
//		printf("��ӳɹ���\n");
//
//	}
//	else
//	{
//		printf("ͨѶ¼������\n");
//	}
//}

//��̬�汾
void AddContact(Contact* ps)
{
	//if (ps->size == ps->capacity)
	//{
	//	PeoInfo* tmp = (PeoInfo*)realloc(ps->data, ps->capacity * 2 * sizeof(PeoInfo));
	//	if (!tmp)
	//	{
	//		printf("��������\n");
	//		return;
	//	}
	//	else
	//	{
	//		ps->data = tmp;
	//		ps->capacity *= 2;
	//		
	//	}
	//	//free(tmp);
	//	//tmp = NULL;
	//}
	CheckCapacity(ps);

	printf("���������֣�\n");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺\n");
	scanf("%d", &(ps->data[ps->size].age));//����ȡ��ַ��ע��
	printf("�������Ա�\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰��\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��\n");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	
	printf("��ӳɹ���\n");

	

}

void ShowContact(Contact* ps)
{
	if (!(ps->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");

	}
	else
	{
		int i = 0;
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		for (i = 0; i < ps->size; i++)
		{
			printf("%15s\t%5d\t%8s\t%15s\t%30s\n", ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}

}

void DelContact(Contact* ps)
{
	if (!(ps->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		char del_name[NAMEMAX] = { 0 };
		printf("������Ҫɾ���˵�����:\n");
		scanf("%s", del_name);
		//int i = 0;
		//for (i = 0; i < ps->size; i++)
		//{

		//	if (!(strcmp(del_name, ps->data[i].name)))
		//	{
		//		int j = 0;
		//		for (j = i; j < ps->size - 1 ; j++)
		//		{
		//			ps->data[j] = ps->data[j + 1];
		//		}
		//		printf("ɾ���ɹ���\n");
		//		ps->size--;
		//		return;
		//	}
		//}
		//printf("�޴���ϵ�ˣ�\n");

		int pos = FindContactByName(ps, del_name);
		if (pos == -1)
			printf("�޴���ϵ�ˣ�\n");
		else
		{
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			printf("ɾ���ɹ���\n");
			ps->size--;
		}
	}
}

void SearchContact(const Contact* ps)
{
	if (!(ps->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		char name_search[NAMEMAX] = { 0 };
		printf("������Ҫ��ѯ��ϵ��������\n");
		scanf("%s", name_search);
		//int i = 0;
		//printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		//for (i = 0; i < ps->size; i++)
		//{
		//	if (!(strcmp(name_search, ps->data[i].name)))
		//	{
		//		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", ps->data[i].name,
		//			ps->data[i].age,
		//			ps->data[i].sex,
		//			ps->data[i].tele,
		//			ps->data[i].addr);
		//		return;
		//	}
		//}
		//printf("�޴���ϵ�ˣ�\n");
		int pos = FindContactByName(ps, name_search);
		if (pos == -1)
			printf("�޴���ϵ�ˣ�\n");
		else
		{
			printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
			printf("%15s\t%5d\t%8s\t%15s\t%30s\n", ps->data[pos].name,
							ps->data[pos].age,
							ps->data[pos].sex,
							ps->data[pos].tele,
							ps->data[pos].addr);
		}
	}

}

void ModifyContact(Contact* ps)
{
	if (!(ps->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		char name_modify[NAMEMAX] = { 0 };
		printf("������Ҫ�޸���ϵ��������\n");
		scanf("%s", name_modify);
		PeoInfo* Modify_Peo= NULL;
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			if (!(strcmp(name_modify, ps->data[i].name)))
			{
				Modify_Peo = &ps->data[i];
				break;
			}
		}
		if (i == ps->size)
		{
			printf("�޴���ϵ�ˣ�\n");
			return;
		}
		else
		{
			int option = 0;
			char new_name[NAMEMAX] = { 0 };
			char new_sex[SEXMAX] = { 0 };
			int new_age = 0;
			char new_tele[TELEMAX] = { 0 };
			char new_addr[ADDRMAX] = { 0 };
			do
			{
				printf("�����޸�ʲô��Ϣ��,��0���˳��޸�\n");
				printf("1.name       2.age\n");
				printf("3.sex       4.tele\n");
				printf("5.addr       0.exit\n");
				scanf("%d", &option);
				switch (option)
				{
				case NAME:
					
					printf("�������޸ĺ��������\n");
					scanf("%s", new_name);
					strcpy(Modify_Peo->name, new_name);
					break;
				case SEX:
					printf("�������޸ĺ���Ա�\n");
					scanf("%s", new_sex);
					strcpy(Modify_Peo->sex, new_sex);
					break;
				case AGE:
					printf("�������޸ĺ�����䣺\n");
					scanf("%d", &new_age);
					Modify_Peo->age = new_age;
					break;
				case TELE:
					printf("�������޸ĺ�ĵ绰��\n");
					scanf("%s", new_tele);
					strcpy(Modify_Peo->tele, new_tele);
					break;
				case ADDR:
					printf("�������޸ĺ�ĵ�ַ��\n");
					scanf("%s", new_addr);
					strcpy(Modify_Peo->addr, new_addr);
					break;
				case EXIT_M:
					printf("�˳��޸�\n");
					break;
				default:
					printf("ѡ�����\n");
					break;
				}

			} while (option);
		}

		
	}
}

int nameCmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* ps)
{
	if (!(ps->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		qsort(ps->data, ps->size, sizeof(ps->data[0]), nameCmp);
		printf("����ɹ���\n");
	}
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SaveContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (!pf)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pf);

	}
	fclose(pf);
	pf = NULL;
}

void LoadContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (!pf)
	{
		printf("%s\n", strerror(errno));
		return;
	}

	//ע�����������fread�ķ���ֵ

	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;

	}

	fclose(pf);
	pf = NULL;
}
