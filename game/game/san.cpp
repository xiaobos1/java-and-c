#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include"game.c"
void menu()
{
	printf("*********************\n");
	printf("******   1.paly   ***\n");
	printf("******   0.exit   ***\n");
	printf("*********************\n");

}
void game()
{
	char ta = 0;
	char arr[ROW][COL];
	//��ʼ������-��ʼ���ո�
	initarr(arr, ROW, COL);
	//��ӡ����
	dayiarr(arr, ROW, COL);
	//�������
	while (1)
	{
		//�������
		palymore(arr, ROW, COL);
		dayiarr(arr, ROW, COL);
		//�ж�����Ƿ�ʤ��
		char ta = iswin(arr,ROW,COL);
		if (ta != 'C')
		{
			break;
		}
		//��������
		comput(arr, ROW, COL);
		dayiarr(arr, ROW, COL);
		//�жϵ���ʤ��
		char ta = iswin(arr, ROW, COL);
		if (ta != 'C')
		{
			break;
		}
	}
	if (ta == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ta == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	dayiarr(arr, ROW, COL);

	
}
int main()
{
	int ch=0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("������С��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (ch);
	return 0;
}