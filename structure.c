#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Student {  //typedef 를 이용하여 struct Student를 > student 이런식으로 짧게 줄일 수 있다.
	int grade;
	char name[10];

} s = {4,"김건태"};   // << 이런식으로 하나의 전역변수로 변수 설정가능

int main(void) {
	/*
	구조체 > 여러개의 변수를 묶어 하나의 객체를 표현하고자 할 때 구조체를 사용 할 수 있다. 클래스느낌인가? 맞네 선언이나 접근이 거의 클래스인데?
	struct 구조체명{
	자료형1 변수명1;
	자료형2 변수명2;
	};
	
	구조체가 포인터변수로 사용되는 경우 내부 변수에 접근할 때 화살표 -> 를 사용한다.
	Stuent *s = mallock(sizeof(Stuent));
	printf("이름 : %s\n, s.name) 이렇게하면안됨 >>>> printf("이름 : %s\n, s->name) 이렇게 써야함
	

	구조체는 현실세계의 객체를 소스코드 상에서 매우 쉽게 표현할 수 있도록 해준다.
	객체란 무엇이지? > 작용의대상이 되는 쪽, 문장에서 동사의 행위가 미치는 대상<>주체, 의사나 행위가 미치는 목적물
	여기서 말하는 현실세계의 객체는 thing이라는 뜻으로 볼 수 있을거 같다. 
	현실세계 물건등의 구체적인것부터 추상적인것까지 아우르는 모든것 정도?
	*/
	
	struct Student s = {4, "KGRT"};
	strcpy(s.name, "KGT");
	s.grade = 4;
	printf("이름 : %s\n", s.name);


	system("pause");
	return 0;
}