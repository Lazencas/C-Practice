#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char name[20];
    int score;
} Student;


int main(void) {
	/*
	��������� ������ FILE������ ������ ������ �����մϴ�.
	������ ������ fopen()�Լ�
	�������� fclose()�Լ�
	���Ͽ��� > �����ϱ�/���� > ���ϴݱ�
	
	*/
	//char s[20] = "Hello World";
	//FILE *fp;
	//fp = fopen("temp.txt", "w");
	//fprintf(fp, "%s\n", s);
	//fclose(fp);

	int n, sum = 0;
	FILE* fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	Student *students = (Student*)malloc(sizeof(Student) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
		printf("�̸�: %s, ����: %d\n", (students + i)->name, (students + i)->score);
	}
	system("pause");
	
	return 0;
}