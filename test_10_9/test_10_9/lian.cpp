#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("lian.dat", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//读文件
//	int ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int mian()
//{
//	fputc('h', stdout);
//	fputc('e', stdout);
//	fputc('b', stdout);
//	fputc('o', stdout);
//
//	return 0;
//}


int main()
{
	char arr[10] = { 0 };
	FILE* pf = fopen("lian.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写
	//fputs("abcd\n", pf);
	//fputs("qwerty\n", pf);
	////读取
	fgets(arr, 4, pf);
	printf("%s\n", arr);
	//关闭
	fclose(pf);
	pf = NULL;
	return 0;
}