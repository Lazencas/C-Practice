#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
	for (int i = 0; i <= 100; i++) { //전통적인 c언어 문법에서는 for문 안에서 i를 초기화 하는것은 금지되었다. 그냥 참고정도만.
		printf("%d\n", i);  // ↑ 조건이 항상 참(true)인 경우 무한루프 발생 주의!
	}
	int n;
	char a;
	printf("값을 입력해봐");
	scanf("%d %c", &n, &a);
	while (n--)	{
		printf("%c ", a);
	}

	

system("pause");
return 0;
}