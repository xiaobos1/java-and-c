#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);*/
//
//	int i = 0;
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct A {
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//struct B {
//	int a;
//	short b;
//	char c;
//	int d;
//};
//int main()
//{
//	struct A s = { 0 };
//	printf("%d", sizeof(struct A));
//	return 0;
//}
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

//int MyAtoi(const char* p)
//{
//	assert(p);
//	/*if (p == NULL)
//	{
//		return;
//	}*/
//	while (isspace(*p))
//	{
//		p++;
//	}
//}
//int main()
//{
//	const char* p = "-1234";
//	int ret = MyAtoi(p);
//	printf("%d", ret);
//	return 0;
//}
#define SEAD(N) ((N&0Xaaaaaaaa)>>1)+((N&0X55555555)<<1)
int main()
{
	int num = 10;
	int ret = SEAD(num);
	printf("%d", ret);
	return 0;
}