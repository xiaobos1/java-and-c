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
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//���ļ�
//	int ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	ret=fgetc(pf);
//	printf("%c", ret);
//	//�ر�
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
	//д
	//fputs("abcd\n", pf);
	//fputs("qwerty\n", pf);
	////��ȡ
	fgets(arr, 4, pf);
	printf("%s\n", arr);
	//�ر�
	fclose(pf);
	pf = NULL;
	return 0;
}