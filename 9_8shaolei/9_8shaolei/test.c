#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//ѡ��庯��
void meun()
{
	printf("*********************\n");
	printf("****** 1.paly *******\n");
	printf("****** 0.exit *******\n");
	printf("*********************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ��
	initboard(mine, ROWS, COLS, '0');// '0'
	initboard(show, ROWS, COLS, '*');//'*'
	//��ӡ����
	// dispalyboard(mine, ROWS, COLS);
	dispalyboard(show, ROW, COL);

	//������
	setmine(mine, ROW, COL);

	//�Ų���
	findmine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		meun();
		printf("��ѡ��>");
		scanf("%d",&input);
		//��Ϸ���ʹ��
		switch (input)
		{
		case 1:
			printf("ɨ��С��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;

}