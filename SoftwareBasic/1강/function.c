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
	printf("�ֻ����� ��������!: %d\n", input);
}
int add(int a, int b) {
	return a + b;
}
int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}


int main(void) {
	// �Լ��� ����, ���ǿ� ȣ����, ����Լ�.
	//�Լ� = �Է� > �Լ�(ó��) > ���, Ư���ڵ��� �ݺ��� ���̱� ���� ���� ���. ��ȯ�ڷ��� �Լ���(�Ű�����), �Ű����� �� ��ȯ���� �������� void�ڷ���
	//�پ��� �Լ��� ��ɵ��� ��� �ϳ��� ��Ű�����·� ���� > ���̺귯��

	//�ڱ� �ڽ��� �����ϴ� �Լ� > ����Լ� > �⺻������ �ڱ��ڽ��� �ҷ���. like �ݺ��� ��������. ���ѷ��� �ȵǰ� �������� �� �����ؾ���.
	
	dice(1);
	dice(3);
	dice(5);
	printf("%d\n", add(6, 10));
	printf("6 ���丮��! : %d\n", factorial(6));
	
	/*
	�Լ������ʹ�  Ư���� �Լ��� ��ȯ�ڷ����� �����ϴ� ������� ������ �� �ִ�.
	�Լ������͸� �̿��ϸ� ���°� ���� ���δٸ� ����� �Լ��� ���������� ��� ����.
	��ȯ�ڷ��� (*�̸�)(�Ű�����) = �Լ���;
	c��� ���α׷��� ��� �Լ��� ���������� ������ ���·� ���� �� �� �ִ�.
	���� �������� ����.
	
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