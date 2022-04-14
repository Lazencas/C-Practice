#include <stdio.h>
#include <limits.h>

int main(void) {
	//배열을 사용하면 동일한 성격의 데이터를 다수 표현가능
	// 자료형 배열명[배열의크기] = {초기화 값};
	int a[10] = { 6,5,4,3,9,8,0,1,2,7 };
	//int a[10] = {0,};  //그냥 0 넣어도 0으로 다 초기화 되는데? 0, 로해야하나?
	int i, maxValue = INT_MIN; // INT_MIN < int형의 최소값 -2147483647 , <limits.h> 헤더파일에 정의가 되어있다.

	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("%d\n", maxValue);

	// C언어에서는 문자열 = 문자의 배열 이다. 그래서 문자열에 배열같이 직접적으로 접근 가능하다.

	system("pause");
	return 0;
}