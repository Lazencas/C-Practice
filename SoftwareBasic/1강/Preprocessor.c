#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "temp.h" //중복안되게 조심
#define PI 3.1415926535 // 매크로 전처리기> 프로그램내에서 사용되는 상수나 함수를 매크로 형태로 저장
#define POW(x) (x*x)


int main(void) {
	printf("%d\n", add(3, 7));

	int r = 10;
	printf("원의 둘레: %2.f\n", 2 * PI * r);

	int x = 6;
	printf("x의 제곱: %d\n", POW(x));

	system("pause");
	return 0;
}