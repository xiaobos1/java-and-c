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

//初始化
void chuShi(C* p);

//增加
void add(C* p);

//打印
void print(const C* p);