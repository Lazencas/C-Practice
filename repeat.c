#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
	for (int i = 0; i <= 100; i++) { //�������� c��� ���������� for�� �ȿ��� i�� �ʱ�ȭ �ϴ°��� �����Ǿ���. �׳� ����������.
		printf("%d\n", i);  // �� ������ �׻� ��(true)�� ��� ���ѷ��� �߻� ����!
	}
	int n;
	char a;
	printf("���� �Է��غ�");
	scanf("%d %c", &n, &a);
	while (n--)	{
		printf("%c ", a);
	}

	

system("pause");
return 0;
}