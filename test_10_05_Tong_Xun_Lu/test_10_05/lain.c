#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void mune()
{
	printf("=============================\n");
	printf("==== 1.add    2.del    ======\n");
	printf("==== 2.search 4.midify ======\n");
	printf("==== 5.sort   6.print  ======\n");
	printf("==== 0.exit            ======\n");
	printf("=============================\n");

}

enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MIDIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼����
	InitContact(&con);
	do {
		mune();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD://����û�
			AddContact(&con);
			break;
		case DEL://ɾ��
			DelContact(&con);
			break; 
		case SEARCH:
			search(&con);
			break;
		case MIDIFY:
			mid(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("�˳�\n");
			break;
		default:
			printf("������������\n");
			break;
		}
	} while (input);
	return 0;
}