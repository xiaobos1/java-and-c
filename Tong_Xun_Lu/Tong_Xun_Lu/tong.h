#pragma once
#include <stdio.h>
#include <string.h>

#define NAME 20
#define SEX  10
#define  T 10
#define  D  10
#define  MAX 1000
typedef struct Peo {
	char name[NAME];
	char sex[SEX];
	int age;
	char t[T];
	char d[D];
}P;

typedef struct C {
	Peo data[MAX];
	int sz;
}C;

//��ʼ��
void chuShi(C* p);

//����
void add(C* p);

//��ӡ
void print(const C* p);