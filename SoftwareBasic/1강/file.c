#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



int main(void) {
	/*
	파일입출력 변수는 FILE형식의 포인터 변수로 선언합니다.
	파일을 열때는 fopen()함수
	닫을때는 fclose()함수
	파일열기 > 파일일기/쓰기 > 파일닫기
	
	*/
	char s[20] = "Hello World";
	FILE *fp;
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);
	fclose(fp);



	
	return 0;
}