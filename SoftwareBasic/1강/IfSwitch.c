#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf(" �մ��� �� �� �Գ���?");
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 2) {
		printf("2�μ����� ������ \n");
	}
	else if (a == 3 || a == 4) {
		printf("4�μ����� ����! \n");
	}
	else {
		printf("���������� ����!\n");
	}
	

	printf("������ �Է�\n");
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