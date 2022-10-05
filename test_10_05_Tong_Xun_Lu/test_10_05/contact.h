#pragma once
#include <string.h>
#include <stdio.h>
#include <string.h>


#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDER 30
#define MAX 1000

typedef struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char adder[MAX_ADDER];
}PeoInfo;

typedef struct Contact {
	PeoInfo data[MAX];
	int sz;//记录有效信息的个数
}Contact;


//初始化通讯录
void InitContact(Contact* pc);
//添加用户
void AddContact(Contact* pc);
//打印
void PrintContact(const Contact* pc);
//删除
void DelContact(Contact* pc);
//查找
void search(Contact* pc);
//修改
void mid(Contact* pc);

