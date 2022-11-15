#define _CRT_SECURE_NO_WARNINGS 1
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define PI acos(-1.0)
double th = PI / 180;

// ����б����Բ
void DrawEllipse(int x0, int y0, int a, int b, int k, int color);
// ��������
void heart(int x0, int y0, int size, COLORREF C);

int main()
{
	initgraph(640, 640);
	setbkcolor(WHITE);
	cleardevice();
	// �����ߵĿ��
	setlinestyle(PS_SOLID, 5);
	setlinecolor(BLACK);
	setfillcolor(RGB(238, 238, 238));
	// �����
	fillrectangle(175, 266, 190, 325);
	fillrectangle(159, 281, 175, 315);
	// �Ҷ���
	fillrectangle(393, 268, 410, 324);
	fillrectangle(410, 286, 423, 311);
	fillellipse(187, 196, 397, 402);
	setfillcolor(WHITE);
	fillroundrect(288, 146, 302, 242, 10, 20);
	// ���������۾�
	DrawEllipse(243, 297, 38, 30, -30, BLACK);
	DrawEllipse(350, 297, 38, 30, 30, BLACK);
	setfillcolor(RGB(248, 245, 143));
	floodfill(243, 297, BLACK);
	floodfill(350, 297, BLACK);
	line(296, 422, 249, 394);
	line(296, 422, 336, 394);
	setfillcolor(RGB(235, 110, 69));
	floodfill(295, 410, BLACK);
	setfillcolor(RGB(137, 211, 211));
	fillcircle(294, 432, 10);
	// ��������
	arc(222, 399, 286, 591, 145.0 / 180 * PI, PI + 145.0 / 180 * PI);
	arc(305, 413, 364, 591, PI + 35.0 / 180 * PI, 55.0 / 180 * PI);
	line(224, 485, 359, 485);
	line(224, 511, 278, 549);
	line(278, 549, 312, 549);
	line(312, 549, 360, 515);
	setfillcolor(RGB(235, 110, 69));
	floodfill(294, 517, BLACK);
	setfillcolor(RGB(238, 238, 238));
	floodfill(252, 554, BLACK);
	floodfill(334, 559, BLACK);
	// ������߸첲
	arc(189, 387, 353, 647, 109.0 / 180 * PI, PI);
	arc(189, 480, 223, 537, 10.0 / 180.0 * PI + PI, 0);
	line(196, 471, 222, 491);
	setfillcolor(RGB(235, 110, 69));
	floodfill(207, 501, BLACK);
	// �����Ҹ첲
	arc(230, 319, 424, 455, 110.0 / 180 * PI + PI, 5.0 / 180 * PI);
	arc(392, 360, 424, 395, -5.0 / 180 * PI, PI + PI / 2);
	arc(310, 286, 402, 394, 70.0 / 180 * PI + PI, 150.0 / 180 * PI + PI);
	line(372, 390, 394, 431);
	setfillcolor(RGB(235, 110, 69));
	floodfill(399, 402, BLACK);
	// ��������ɫ
	setfillcolor(RGB(238, 238, 238));
	floodfill(296, 458, BLACK);
	// ��������
	line(463, 187, 422, 365);
	heart(464, 67, 30, BLACK);
	setfillcolor(RGB(235, 110, 69));
	floodfill(464, 70, BLACK);
	setfillcolor(RGB(255, 232, 201));
	solidcircle(508, 70, 6);
	_getch();
	return 0;
}

void heart(int x0, int y0, int size, COLORREF C)
{
	double  m, n, x, y;
	double i;
	for (i = 0; i <= 2 * size; i = i + 0.01)
	{
		// �����������
		m = i;
		n = -size * (((sin(i) * sqrt(fabs(cos(i)))) / (sin(i) + 1.4142)) - 2 * sin(i) + 2);
		// ת��Ϊ�ѿ�������
		x = n * cos(m) + x0;
		y = n * sin(m) + y0;
		setfillcolor(C);
		solidcircle((int)x, (int)y, 2);
	}
}

void DrawEllipse(int x0, int y0, int a, int b, int k, int color)
{
	double i;
	double x, y, tx, ty;
	for (i = -180; i <= 180; i = i + 0.5)
	{
		x = a * cos(i * th);
		y = b * sin(i * th);
		tx = x;
		ty = y;
		x = tx * cos(k * th) - ty * sin(k * th) + x0;
		y = y0 - (ty * cos(k * th) + tx * sin(k * th));
		setfillcolor(color);
		solidcircle((int)x, (int)y, 2);
	}
}