#define _CRT_SECURE_NO_WARNINGS 1

#include "tong.h"

void chuShi(C* p)
{
	p->sz=0;
	memset(p->data, 0, sizeof(p->data));
}
//增加
void add(C* p) 
{
	if (p->sz == MAX)
	{
		printf("满了\n");
		return;
	}
	printf("请输入名字 >");
	scanf("%s", p->data[p->sz].name);
	printf("请输入年龄 >");
	scanf("%s", &(p->data[p->sz].name));
	printf("请输入性别 >");
	scanf("%s", p->data[p->sz].sex);
	printf("请输入电话 >");
	scanf("%s", p->data[p->sz].t);
	printf("请输入地址 >");
	scanf("%s", p->data[p->sz].d);

	p->sz++;
	printf("添加成功\n");

}

void print(const C* p)
{
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	/*for (i = 0; i < p->sz; i++)
	{

	}*/
}