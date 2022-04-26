#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char name[20];
    int score;
} Student;


int main(void) {
	/*
	파일입출력 변수는 FILE형식의 포인터 변수로 선언합니다.
	파일을 열때는 fopen()함수
	닫을때는 fclose()함수
	파일열기 > 파일일기/쓰기 > 파일닫기
	
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
		printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
	}
	system("pause");
	
	return 0;
}