#define _CRT_SECURE_NO_WARNINGS //취약함수 오류로 인한 중지를 중지
#include <stdio.h>  //include 는 라이브러리 삽입 , stdio > standard input output > printf와같은 출력함수 사용 가능

int b; // 이같이 정적변수로 선언된 것은 기본적으로 0으로 값이 초기화됨.
/*
정적 변수란 프로그램 전체에 걸쳐 살아있는 변수 전역변수와 비슷하지만 차이점은 정적변수는 초기화가 딱 한번만 진행된다.

반대되는 발은 자동변수이고 일반적으로 지역변수이다.

*/

int main(void) { //프로그램은 항상 메인 함수로부터 시작한다,
	printf("Hello World \n"); //stdio.h 헤더파일에 포함되어 있음. c언어에서는 하나의 명령어가 끝나면 ; 붙임.
	int a=0; //변수선언, 초기화를 하지 않으면 쓰레기값이 들어간다. 오류가 나기도 함.
	scanf("%d", &a); //이것만 사용하면 오류가 남. 비주얼스튜디오는 기본적으로 취약한 함수를 사용할 수 없도록 제한.
	printf("the number is %d \n", a);



	// &는 특정한 변수의 주소를 의미. 실제로 컴퓨터는 특정한 메모리 주소에 접근하여 데이터를 수정하므로 &를 이용.
	// 그렇다면 메모리 주소에 얼마만큼의 크기로 데이터를 쓸 지 결정해야 함. > 형식지정자
	/* 형식지정자@@@@@@
	int 4Bytes    %d 를 이용해서 정수형 데이터 입력 및 출력
	long long 8Bytes %lld 를 이용해서 큰 정수형 데이터를 입력 및 출력   
	double 8Bytes 입력시 %lf, 출력시 %f 로 큰 실수형 데이터를 처리  >  입력 받을 때는 특정 주소에 특정 크기만큼 입력을 수행. 다만 출력할 때는 주소가 아닌 값 자체를 이용해 출력하므로 구체적인 크기를 지정하지 않아도 된다.
	float 4Bytes %f 를 이용해서 실수형 데이터를 입력 및 출력
	string 제한없음 %s를 이용해서 문자열 데이터를 입력 및 출력
	char 1Bytes %c 를 이용해서 문자 데이터를 입력 및 출력
	*/



	/*
	* 정수를 표현할때는 2의 보수 방식을 이용.
	int 4
	long long 8
	double 8  부호/지수/유효숫자
	string 
	bool 1
	char 8
	*/

	
	system("pause"); //system()함수를 이용해 운영체제의 기본적인 기능을 이용할 수 있다, pause는 키보드를 입력하기전까지 대기하는 기능.
	return 0;  // 함수는 반환값이 없을 수도 있으나 메인 함수는 항상 0을 반환하는것이 일반적이다
}

