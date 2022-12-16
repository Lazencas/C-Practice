#include<stdio.h>
#include<stdint.h> 
#include<conio.h>

/*
예제 
사용자로부터 두 정수를 입력받아 평균을 계산하여 출력한다 > 소수점 둘째자리까지만 표시하며 변수는 2개만 선언한다. 
*/

/*----------------- Function declaration -----------------*/
int main(void); //메인함수  

/*--------------- Function declaration End ---------------*/


int main(void){
	//입력받을 두 정수를 담을 변수 inputIntA, inputIntB 를 선언하고 0으로 초기화 해준다. 
    uint32_t inputIntA = 0;
    uint32_t inputIntB = 0;
	
	printf("두 정수를 입력하세요: ");
	//scanf함수로 두개의 값을 입력받아 평균값을 출력한다. 
	scanf("%d%d", &inputIntA, &inputIntB);	
    printf("두 값의 평균값: %.2f", (inputIntA+inputIntB)/2.0);    
	return 0;
	

} 
