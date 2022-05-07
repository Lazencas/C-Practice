#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define INF 10000
#define SIZE 10000


//int arr[INF];
//int count = 0;
//
//void addBack(int data) {
//	arr[count] = data;
//	count++;
//}
//
//void addFirst(int data) {
//	for (int i = count; i >= 1; i--) {
//		arr[i] = arr[i - 1];
//	}
//	arr[0] = data;
//	count++;
//}
int top = -1;
int stack[SIZE];

void push(int data) {
	if (top == SIZE - 1) {

	}
}

void pop() {
	if (top == -1) {
		printf("스택 언더플로우가 발생");
		return -INF;
	}
	return stack[top--];
}

int main(void) {
	/*
	자료구조의 필요성
	데이터를 효과적으로 저장하고 처리하는 방법
	자료구조를 모르면 불필요하게 메모리와 성능을 낭비할 여지가 있다.

	ex INT형이 100만개 있으면 원하는 데이터를 가장 빠르게 찾는 자료구조는?

	선형
	배열, 연결리스트, 스택, 큐

	비선형
	트리
	그래프

	효율적인 자료구조 설계를 위해 알고리즘 지식 필요
	
	프로그램의 성능 측정 방법론
	시간복잡도란 알고리즘에 사용되는 연산횟수를 의미
	공간복잡도란 알고리즘에 사용되는 메모리의 양을 의미

	효율적인 알고리즘을 사용한다고 가정했을 때 일반적으로 시간과 공간은 반비례 관계


	연결리스트
	일반적으로 배열을 사용하여 데이터를 순차적으로 저장하고, 나열할 수 있다
	배열을 사용하는 경우 메모리 공간이 불필요하게 낭비

	1 2 3 4 5 6 7 8

    양방향 연결리스트
	양방향 연결리스트는 머리와 꼬리를 모두 가진다
	앞노드와 뒤노드의 정보를 모두 저장하고 있다.


	스택
	스택은 들어가는곳으로 나옴
	배열을 이용한 구현방법과 연결리스트를 이용한 구현방법으로 나누어짐.
	푸쉬, 팝
	*/



	system("pause");
	return 0;
}