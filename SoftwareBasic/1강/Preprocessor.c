#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "temp.h" //�ߺ��ȵǰ� ����
#define PI 3.1415926535 // ��ũ�� ��ó����> ���α׷������� ���Ǵ� ����� �Լ��� ��ũ�� ���·� ����
#define POW(x) (x*x)


int main(void) {
	printf("%d\n", add(3, 7));

	int r = 10;
	printf("���� �ѷ�: %2.f\n", 2 * PI * r);

	int x = 6;
	printf("x�� ����: %d\n", POW(x));

	system("pause");
	return 0;
}