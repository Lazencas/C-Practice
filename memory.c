#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>


int main(void) {
	/*
	동적메모리할당 
	malloc() 함수 > <stdlib.h>에 정의되어 있음
	malloc()함수는 메모리 할당에 성공하면 주소를 반환하고, 그러지 않으면 NULL값을 반환한다.
	malloc(할당할 바이트 크기);
	동적할당변수는 힙영역에 담김.

	스택에 선언된 변수는 따로 메모리 해제를 해주지 않아도된다.
	하지만 동적으로 할당된 변수는 반드시 free()함수로 메모리 해제를 해주어야 한다.
	메모리해제를 하지 않으면 메모리 내의 프로세스 무게가 더해져 언젠가는 오류가 발생한다.
	메모리 누수(Memory Leak)방지는 코어개발자의 핵심 역량이다.

	malloc() free() 한쌍


	일괄적인 범위의 메모리를 모두 특정한 값으로 설정하기 위해서는 memset()을 사용
	memset(포인터,값,크기);
	한 바이트 씩 값을 저장하므로 문자열 배열의 처리방식과 흡사
	따라서 memset()함수는 <string.h>라이브러리에 정의되어있음

	동적메모리할당 = 프로그램이 실행중인 도중에 메모리공간을 배정받을 수 있다.

	*/
	int *a = malloc(sizeof(int));  //sizeof(int) 4byte 반환. = sizeof(4)동일
	printf("%d\n", a);
	free(a);

	char* b = malloc(100);
	memset(b, 'A', 100);
	int i;
	for (i = 0; i < 100; i++) {
		printf("%c ", b[i]);
	}
	free(b);

	system("pause");
	return 0;
}