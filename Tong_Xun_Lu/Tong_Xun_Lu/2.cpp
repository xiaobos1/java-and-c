#define _CRT_SECURE_NO_WARNINGS 1

#include "tong.h"

void chuShi(C* p)
{
	p->sz=0;
	memset(p->data, 0, sizeof(p->data));
}
//����
void add(C* p) 
{
	if (p->sz == MAX)
	{
		printf("����\n");
		return;
	}
	printf("���������� >");
	scanf("%s", p->data[p->sz].name);
	printf("���������� >");
	scanf("%s", &(p->data[p->sz].name));
	printf("�������Ա� >");
	scanf("%s", p->data[p->sz].sex);
	printf("������绰 >");
	scanf("%s", p->data[p->sz].t);
	printf("�������ַ >");
	scanf("%s", p->data[p->sz].d);

	p->sz++;
	printf("��ӳɹ�\n");

}

void print(const C* p)
{
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	/*for (i = 0; i < p->sz; i++)
	{

	}*/
}