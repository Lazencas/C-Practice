#include <stdio.h>  //include 는 라이브러리 삽입 , stdio > standard input output > printf와같은 출력함수 사용 가능

int main(void) { //프로그램은 항상 메인 함수로부터 시작한다,
	printf("Hello World"); //stdio.h 헤더파일에 포함되어 있음. c언어에서는 하나의 명령어가 끝나면 ; 붙임.
	system("pause"); //system()함수를 이용해 운영체제의 기본적인 기능을 이용할 수 있다, pause는 키보드를 입력하기전까지 대기하는 기능.
	return 0;  // 함수는 반환값이 없을 수도 있으나 메인 함수는 항상 0을 반환하는것이 일반적이다
}

