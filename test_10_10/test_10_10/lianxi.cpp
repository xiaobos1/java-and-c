#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S {
	char arr[10];
	int num;
	float sc;
};
//int main()
//{
//	struct S s = { "abcdef",6,5.5f };
//	FILE* pf = fopen("lian.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	/*fprintf(pf, "%s,%d,%f", s.arr,s.num,s.sc);*/
//	//���ļ�
//	fscanf(pf, "%s,%d,%f", s.arr, &(s.num), &(s.sc));
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { "zxcvbnm",18,6.5f };
//	FILE* pf = fopen("lian.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { "zxcvbnm",18,6.5f };
//	FILE* pf = fopen("lian.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.arr, s.num, s.sc);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char c[10] = "hello";
//	int a = 1000;
//	char bff[50] = { 0 };
//	sprintf(bff, "%d", &a);
//	printf("%s", bff);
//	return 0;
//}

//int main()
//{
//	struct S s = { "gouwa",10,2.2f };
//	char bff[60] = { 0 };
//	sprintf(bff, "%s %d %f", s.arr, s.num, s.sc);
//	printf("%s\n", bff);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("lian.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	////���ļ�
//	char ch=fgetc(pf);
//	printf("%c",ch );
//
//	fseek(pf, 2, SEEK_CUR);
//	char ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("lian.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfread = fopen("lian.txt", "r");
//	if (pfread == NULL)
//	{
//		return 1;
//	}
//	FILE* pfbegin = fopen("test2.txt", "w");
//	if (pfbegin == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//��д�ļ�
//	int ch = 0;
//	while (ch = fgetc(pfread) != EOF)
//	{
//		fputc(ch, pfbegin);
//	}
//
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfbegin);
//	pfbegin = NULL;
//
//
//	return 0;
//}