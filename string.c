#include <stdio.h>
#include <limits.h>

int main(void) {
	//문자열 > 문자열의 끝에는 NULL값이 들어가있다. >printf() 함수를 실행하면 컴퓨터는 NULL을 만날때까지 출력한다.
	
	char *a = "Hello World";
	printf("%s\n", a);
	printf("%c\n", a[3]);

	char b[100];
	//gets(b);     // gets() 함수는 공백까지 포함하여 한 줄을 입력받는다 배열의 전체적인 범위를 고려하지 않는다는 점에서 보안상에 문제가 있다. 그러니까 > gets_s(); 사용
	// 아 gets()함수는 버퍼의 크기를 벗어나도 입력을 받으니까 스택오버플로우를 이용한 해킹기법에 취약하지 않을까?
	//gets_s() 함수 같은 경우는 버퍼의 크기를 철저히 지키기 때문에 이런 취약점을 보완.
	gets_s(b, sizeof(b));  // sizeof() 함수는 특정배열의 전체크기가 얼마인지 알려줌.
	printf("%s\n", b);


	//<string.h>라이브러리에 c언어에서의 문자열함수 포함
	  /*
	strlen() 문자열길이반환
	strcmp() 문자열1이 문자열2보다 사전적으로 앞에있으면 -1, 뒤에 있으면 1을 반환
	strcpy() 문자열을 복사한다.
	strcat() 문자열1에 문자열2를 더한다. > 주의점 문자열1의 크기가 문자열2를 더했을때도 문제없을정도로 넉넉해야한다.
	strstr() 문자열1에 문자열2가 어떻게 포함되어있는지를 반환한다.

	*/

	system("pause");
	return 0;
}