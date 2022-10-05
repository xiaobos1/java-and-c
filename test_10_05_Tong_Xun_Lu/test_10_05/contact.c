#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pc) 
{
	pc->sz=0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	printf("���������� >");
	scanf("%s", pc->data[pc->sz].name);
	printf("���������� >");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա� >");
	scanf("%s", pc->data[pc->sz].sex); 
	printf("������绰 >");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ >");
	scanf("%s", pc->data[pc->sz].adder);

	pc->sz++;
	printf("���ӳɹ�\n");
}

//��ӡ
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",pc->data[i].name,
											       pc->data[i].age,
											       pc->data[i].sex,
			                                       pc->data[i].tele,
			                                       pc->data[i].adder);
	}
}


int find(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
//ɾ��
void DelContact(Contact* pc)
{
	int i = 0;
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵����� >");
	scanf("%s", &name);
	//����Ҫɾ������
	int ret=find(pc, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	for (i = ret; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//����
void search(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵����� >");
	scanf("%s", &name);

	int ret = find(pc, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[ret].name,
				pc->data[ret].age,
				pc->data[ret].sex,
				pc->data[ret].tele,
				pc->data[ret].adder);
	
	}
	
}


//����
void mid(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵����� >");
	scanf("%s", &name);

	int ret = find(pc, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("���������� >");
		scanf("%s", pc->data[ret].name);
		printf("���������� >");
		scanf("%d", &(pc->data[ret].age));
		printf("�������Ա� >");
		scanf("%s", pc->data[ret].sex);
		printf("������绰 >");
		scanf("%s", pc->data[ret].tele);
		printf("�������ַ >");
		scanf("%s", pc->data[ret].adder);

		printf("�޸ĳɹ�\n");
	}
}