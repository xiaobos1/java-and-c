#define _CRT_SECURE_NO_WARNINGS 1
#include "tong.h"

void meun()
{
	printf("******************************\n");
	printf("****1.����   2.ɾ��   ********\n");
	printf("****3.�鿴   4.��     ********\n");
	printf("****5.����   6.��ӡ   ********\n");
	printf("****0.�˳�            ********\n");
	printf("*************************\n");
		
}
enum O {
	EXIT,
	ADD,
	DEL,
	SEL,
	MOD,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	C con;//ͨѶ¼

	chuShi(&con);
	do {
		meun();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://����
			add(&con);
			break;
		case DEL://ɾ��
			break;
		case SEL://�鿴
			break;
		case MOD://��
			break;
		case SORT://����
			break;
		case PRINT://��ӡ
			print(&con);
			break;
		case EXIT://�˳�
			break;
		default:
			break;
		}
	} while (input);

	return 0;
}