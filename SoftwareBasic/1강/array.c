#include <stdio.h>
#include <limits.h>

int main(void) {
	//�迭�� ����ϸ� ������ ������ �����͸� �ټ� ǥ������
	// �ڷ��� �迭��[�迭��ũ��] = {�ʱ�ȭ ��};
	int a[10] = { 6,5,4,3,9,8,0,1,2,7 };
	//int a[10] = {0,};  //�׳� 0 �־ 0���� �� �ʱ�ȭ �Ǵµ�? 0, ���ؾ��ϳ�?
	int i, maxValue = INT_MIN; // INT_MIN < int���� �ּҰ� -2147483647 , <limits.h> ������Ͽ� ���ǰ� �Ǿ��ִ�.

	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("%d\n", maxValue);

	// C������ ���ڿ� = ������ �迭 �̴�. �׷��� ���ڿ��� �迭���� ���������� ���� �����ϴ�.

	system("pause");
	return 0;
}