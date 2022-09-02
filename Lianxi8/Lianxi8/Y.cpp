#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	printf(" % d", k);
//	return 0;
//
//}//
//¾Å¾Å³Ë·¨±í
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

/*nt main(){
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	return 0;
}*/
//int main()
//{
//	int i = 1;
//	int s = 1;
//	int t = 1;
//	do
//	{
//		if (i == 1)
//		{
//			s = 1;
//			i++;
//			continue;
//		}
//		t = t * i;
//		s= s + t;
//		i++;
//	} while (i <= 10);
//	printf("%d\n", s);
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;

}