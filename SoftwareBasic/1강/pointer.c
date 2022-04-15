#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
/*변수는 그 자체로 자신의 자료형에 맞는 값을 저장한다
포인터 변수는 특이한 변수로, 메모리주소를 저장한다.
포인터는 특정한 변수 자체가 존재하는 메모리주소의 값을 가진다.
int*b = &a; 처럼 '선언할 때' 쓰는 *은 포인터 변수임을 알려주기 위한 목적을 가진다.
 & 주소연산자 : 변수 앞에 붙어서 변수의 메모리 시작 주소값을 구한다.
 * 포인터 : 포인터 변수를 선언할 때 사용.
 * 간접참조연산자 : 선언된 포인터 변수가 가리키는 변수를 구한다.


*/
	//int a = 5;
	//int* b = &a;
	//printf("%d\n", *b);

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", &a[i]);  // 이렇게 하면 인트값이 하나에 4byte 이므로 주소값이 한칸당 4씩 증가함.
	}

	/*
	포인터는 컴퓨터 시스템의 특정한 메모리에 바로 접근할 수 있다.
	따라서 기존에 존재하던 중요한 메모리 영역에 접근하지 않아야 한다 > 커널영역 메모리라던가겠지?
	int *a =  0X33484735;
	*a = 0;
	같은식의 코드는 위험하다 > 저 주소에 뭐가 있을지 알고 저 주소에 들어있는 값을 0으로 바꾸냐;;

	다중포인터
	int a= 5;
	int *b = &a;
	int **c = &b;

	배열과 포인터는 동일하다 > 배열을 선언한 이후에는 그 이름 자체가 포인터 변수와 동일하다.
	int a[] = {1,2,3,4,5,6,7,8,9,10}
	int *b =  a;
	printf("%d\n", b[2]);

	이처럼 배열의 이름 자체를 포인터 변수처럼 쓸 수 있다.
	*/


	system("pause");
	return 0;
}