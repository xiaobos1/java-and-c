#define _CRT_SECURE_NO_WARNINGS 1
#include "tong.h"

void meun()
{
	printf("******************************\n");
	printf("****1.增加   2.删除   ********\n");
	printf("****3.查看   4.改     ********\n");
	printf("****5.排序   6.打印   ********\n");
	printf("****0.退出            ********\n");
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
	C con;//通讯录

	chuShi(&con);
	do {
		meun();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://增加
			add(&con);
			break;
		case DEL://删除
			break;
		case SEL://查看
			break;
		case MOD://改
			break;
		case SORT://排序
			break;
		case PRINT://打印
			print(&con);
			break;
		case EXIT://退出
			break;
		default:
			break;
		}
	} while (input);

	return 0;
}