#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



int main(void) {
	/*
	��������� ������ FILE������ ������ ������ �����մϴ�.
	������ ������ fopen()�Լ�
	�������� fclose()�Լ�
	���Ͽ��� > �����ϱ�/���� > ���ϴݱ�
	
	*/
	char s[20] = "Hello World";
	FILE *fp;
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);
	fclose(fp);



	
	return 0;
}