#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//int main()
//{
//	int i, j, k;
//	int count = 0;
//	int arr[n];
//	//i表示百位的1-4
//	for (i = 1; i <= 4; i++) 
//	{
//		for (j = 1; j <= 4; j++)//j表示十位的范围1-4
//		{
//			for (k = 1; k <= 4; k++)//k表示个位
//			{
//				if (i != j && i != k && j != k)//因为每一位不能重复，
//				{
//					arr[count] = i * 100 + j * 10 + k;
//					count++;//表示数组的个数也就是每一个三位数的个数
//				}
//			}
//		}
//	}
//	int num = count;
//	printf("有%d个不重复的个数\n", num);
//	for (i = 0; i < count; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int j, i;	
//	for (i = 100; i <=200; i++)
//	{
//		int num = 0;
//		for (j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	double num = 0;
//	scanf("%d", &money);
//	if (money <= 100000)
//	{
//		num = money * 0.1;
//	}
//	else if (money < 200000)
//	{
//		num = 100000 * 0.1 + (money - 10) * 0.075;
//	}
//	else if (money <= 400000)
//	{
//		num = (money - 200000) * 0.05;
//	}
//	return 0;
//}
//#include <stdio.h>

//char sout(char* arr) {
//	return *arr;
//}
//int main()
//{
//	char str[] = "abcdef";
//	char c =sout(str+2);
//	printf("%c", c);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int s = 0, i,j,z;
//	for (i = 0; i < 100000; i++)
//	{
//		 j = sqrt(i + 100);
//		 z = sqrt(i + 168);
//		if (j * j == i + 100) 
//		{
//			s++;
//		}
//		if (z * z == i + 100 + 168)
//		{
//			s++;
//		}
//		if (s == 2)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int day, month, year, sum, leap;
//    printf("\n请输入年、月、日，格式为：年,月,日（2021 7 9）\n");
//    scanf("%d%d%d", &year, &month, &day);  // 格式为：2015,12,10
//    switch (month) // 先计算某月以前月份的总天数
//    {
//    case 1:sum = 0; break;
//    case 2:sum = 31; break;//1月31天 
//    case 3:sum = 59; break;//2月28 
//    case 4:sum = 90; break;//3月31天,以此类推 
//    case 5:sum = 120; break;
//    case 6:sum = 151; break;
//    case 7:sum = 181; break;
//    case 8:sum = 212; break;
//    case 9:sum = 243; break;
//    case 10:sum = 273; break;
//    case 11:sum = 304; break;
//    case 12:sum = 334; break;
//    default:printf("data error"); break;
//    }
//    sum = sum + day; // 再加上某天的天数
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {// 判断是不是闰年
//        leap = 1;
//    }
//    else {
//        leap = 0;
//    }
//    if (leap == 1 && month > 2) { // *如果是闰年且月份大于2,总天数应该加一天
//        sum++;
//    }
//    printf("这是这一年的第 %d 天。", sum);
//    printf("\n");
//}

//int main()
//{
//	printf("输入你的六位密码：");
//	int c = 3;
//	long a = 0;
//	while (c--)
//	{
//		scanf("%d", &a);
//		if (a == 123456)
//		{
//			break;
//			//
//		}
//		else 
//		{
//			//
//		}
//		if (c == 1)
//		{
//			//重复输入退出
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d \t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int g, h, b;
//	int s = 0;
//	for (int i = 100; i < 1000; i++) 
//	{
//		g = i % 10;
//		h = (i / 10) % 10;
//		b = i / 100;
//		s = pow(g, 3) + pow(h, 3) + pow(b, 3);
//		if (s == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int number, times;
//	int sum = 0;
//	int count = 0;
//	scanf("%d%d", &number, &times);
//	while (times--)
//	{
//		sum = sum * 10 + number;
//		count += sum;
//		if(times !=0)
//		{
//			printf("%d + ", sum);
//		}
//		else {
//			printf("%d =", sum);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int app(int n)
//{
//	if (n == 1)
//		return 1;
//	return n * app(n - 1);
//}
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		sum += app(i);//获取1—5的阶乘
//		printf("%d ", app(i));
//	}
//	printf("%d", sum);
//	return 0;
//}
//void fun(char* a)
//{
//	if (*a)
//	{
//		fun(a + 1);
//		printf("%c", *a);
//	}
//}
//int main()
//{
//	char arr[20] = "zxcv";
//	fun(arr);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,9,6,8,7,23 };
//	int left = 0;
//	int right = 9;
//	int num = 7;
//	int mid = (left + right) / 2;
//	while (num != arr[mid])
//	{
//		if (arr[mid] > num)
//		{
//			right = mid;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid;
//		}
//		mid=(left + right) / 2;
//	}
//	printf("%d", mid);
//	return 0;
//}
//
//void move(int n, char x, char y, char z)
//{
//	if (1 == n)
//	{
//		printf("%c-->%c\n", x, z);
//	}
//	else {
//		move(n - 1, x, z, y);
//		printf("%c-->%c\n", x, z);
//		move(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入汉诺塔的层数:\n");
//	scanf("%d", &n);
//	move(n, 'X', 'Y', 'Z');
//	return 0;
//}
// 



////参数row表示起始行，n表示列数，（*chess)[8]指向棋盘的每一个指针
//int count = 0;
//int notDanger(int row, int n, int(*chess)[8])
//{
//	int i,flag1;
//	for (i = 0; i < 8; i++)
//	{
//		if (*(*(chess + i) + n) != 0)
//		{
//			flag1 = 1;
//			break;
//		}
//	}
//}
//void EightQueen(int row,int n,int (*chess)[8])
//{
//	int chess1[8][8], i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			chess1[i][j] = chess[i][j];
//		}
//	}
//	if (8 == row)
//	{
//		printf("第 %d 种", count + 1);
//		for (i = 0; i < 8; i++)
//		{
//			for (j = 0; j < 8; j++)
//			{
//				printf("%d", *(*(chess1 + i) + j));
//			}
//			printf("\n");
//		}
//		printf("\n");
//		count++;
//	}
//	else 
//	{
//		//判断是否有危险
//		for (j = 0; j < 8; j++)
//		{
//			if (notDanger(row,j,chess))
//			{
//				for (i = 0; i < 8; i++)
//				{
//					*(*(chess1 + row) + i) = 0;
//				}
//				*(*(chess1 + row) + i) = 1;
//				EightQueen(row + 1, n, chess1);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int chess[8][8], i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			chess[i][j] = 0;
//		}
//	}
//	EightQueen();
//	return 0;
//}

//int main()
//{
//	printf("%c", 97-32);
//	return 0;
//}

void print(char* str)
{
	if (*str)
	{
		print(str + 1);
		printf("%c", *str);
	}
}
int main()
{
	char str[10] = "abcdefg";
	print(str);
	return 0;
}