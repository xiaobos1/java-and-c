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
		printf("通讯录已满\n");
		return;
	}
	printf("请输入名字 >");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄 >");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别 >");
	scanf("%s", pc->data[pc->sz].sex); 
	printf("请输入电话 >");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址 >");
	scanf("%s", pc->data[pc->sz].adder);

	pc->sz++;
	printf("增加成功\n");
}

//打印
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
//删除
void DelContact(Contact* pc)
{
	int i = 0;
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("无需删除\n");
		return;
	}
	printf("请输入要删除人的名字 >");
	scanf("%s", &name);
	//查找要删除的人
	int ret=find(pc, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	for (i = ret; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}

//查找
void search(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字 >");
	scanf("%s", &name);

	int ret = find(pc, name);
	if (ret == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[ret].name,
				pc->data[ret].age,
				pc->data[ret].sex,
				pc->data[ret].tele,
				pc->data[ret].adder);
	
	}
	
}


//查找
void mid(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字 >");
	scanf("%s", &name);

	int ret = find(pc, name);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字 >");
		scanf("%s", pc->data[ret].name);
		printf("请输入年龄 >");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入性别 >");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话 >");
		scanf("%s", pc->data[ret].tele);
		printf("请输入地址 >");
		scanf("%s", pc->data[ret].adder);

		printf("修改成功\n");
	}
}