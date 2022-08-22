#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf(" 손님이 몇 명 왔나요?");
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 2) {
		printf("2인석으로 가시죠 \n");
	}
	else if (a == 3 || a == 4) {
		printf("4인석으로 가라! \n");
	}
	else {
		printf("대형섟으로 가라!\n");
	}
	

	printf("학점을 입력\n");
	char b;
	scanf("%c", &b);
	switch (b){
	case 'A' :
		printf("A \n"); break;
	case 'B' :
		printf("B \n"); break;
	case 'C' :
		printf("C \n"); break;
	}

	system("pause");
	return 0;
}