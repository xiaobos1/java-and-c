#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��������

//��ʼ������
void initarr(char arr[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void dayiarr(char arr[ROW][COL], int row, int col);
//�������
void palymore(char arr[ROW][COL], int row, int col);
//��������
void comput(char arr[ROW][COL], int row, int col);
//
char iswin(char arr[ROW][COL], int row, int col);

