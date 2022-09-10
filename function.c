#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void function() {
	printf("It's my function.");
}

void yourfunction() {
	printf("It's your function.");
}

int aadd(int a, int b) {
	return a + b;
}

void dice(int input) {
	printf("주사위를 던져보자!: %d\n", input);
}
int add(int a, int b) {
	return a + b;
}
int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}


int main(void) {
	// 함수의 개념, 정의와 호출방법, 재귀함수.
	//함수 = 입력 > 함수(처리) > 출력, 특정코드의 반복을 줄이기 위해 많이 사용. 반환자료형 함수명(매개변수), 매개변수 및 반환값이 없을때는 void자료형
	//다양한 함수의 기능들을 묶어서 하나의 패키지형태로 묶음 > 라이브러리

	//자기 자신을 포함하는 함수 > 재귀함수 > 기본적으로 자기자신을 불러냄. like 반복문 같은느낌. 무한루프 안되게 종료조건 잘 설정해야함.
	
	dice(1);
	dice(3);
	dice(5);
	printf("%d\n", add(6, 10));
	printf("6 팩토리얼! : %d\n", factorial(6));
	
	/*
	함수포인터는  특정한 함수의 반환자료형을 지정하는 방식으로 선언할 수 있다.
	함수포인터를 이용하면 형태가 같은 서로다른 기능의 함수를 선택적으로 사용 가능.
	반환자료형 (*이름)(매개변수) = 함수명;
	c언어 프로그램의 모든 함수는 내부적으로 포인터 형태로 관리 할 수 있다.
	많이 사용되지는 않음.
	
	*/

	void(*fp)() = function;
	fp();
	fp = yourfunction;
	fp();

	int(*ffp)(int, int) = add;
	printf("%d\n", ffp(10, 3));
	system("pause");
	
	return 0;
}