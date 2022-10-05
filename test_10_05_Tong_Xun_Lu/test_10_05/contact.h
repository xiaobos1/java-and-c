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
	int sz;//��¼��Ч��Ϣ�ĸ���
}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//����û�
void AddContact(Contact* pc);
//��ӡ
void PrintContact(const Contact* pc);
//ɾ��
void DelContact(Contact* pc);
//����
void search(Contact* pc);
//�޸�
void mid(Contact* pc);

