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
	//创建通讯录
	Contact con;
	//初始化通讯录函数
	InitContact(&con);
	do {
		mune();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD://添加用户
			AddContact(&con);
			break;
		case DEL://删除
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
			printf("退出\n");
			break;
		default:
			printf("错误重新输入\n");
			break;
		}
	} while (input);
	return 0;
}