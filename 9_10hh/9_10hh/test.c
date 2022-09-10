#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*float a = 5 / 6;
	printf("%f", a);
	return 0;*/

	//int a = 3;
	//int b = a >> 1;//ËãÊýÓÒÒÆ
	//printf("%d", b);
	 
	/*int a = -2;
	int b = a >> 5;
	printf("%d", b);*/

//	int a = 3;//     00000000 00000000 00000000 00000011
////     00000000 00000000 00000000 00000101
//	int i = 0;

	/*int i = 0;
	int n = 20;
	int s = 0;
	int t = 0;
	for (i =2; i <= 1; i-2)
	{
		n = n + i;


	}
	printf("%d",s);
	*/

	int i = 40;
	int m = 40;
	while (i >= 2)
	{
		m = m + i / 2;
		i = i / 2 + i % 2;
	}
	printf("%d", m);

	/*int i = 20;
	int m = 20;
	for (i = 20; i >= 2; )
	{
		m = m + i / 2;
		i = i / 2 + i % 2;

	}
	printf("%d", m);*/
	return 0;
}