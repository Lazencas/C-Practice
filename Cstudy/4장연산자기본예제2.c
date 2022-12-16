#include<stdio.h>
#include<stdint.h> 
#include<conio.h>

/*
예제 
사용자로부터 정수로 초를 입력박아 '시:분:초' 형식으로 출력하는 프로그램을 작성한다 > 
모두 두자리 정수로 표시하며 한자리 숫자인 경우 앞에 0을 붙여 출력해야한다. 
*/

/*----------------- Function declaration -----------------*/
int main(void); //메인함수  

/*--------------- Function declaration End ---------------*/


int main(void){
	//사용자로부터 입력받을 초를 담을 변수를 선언하고 0으로 초기화한다. 
	uint32_t inputSecond = 0;
	printf("원하는 시간 (초)를 입력하세요: ");
	scanf("%d", &inputSecond);
	
	// inputSecond/3600 = 시간  (inputSecond%3600)/60 = 분  (inputSecond%3600)%60 = 초 
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", inputSecond,inputSecond/3600, (inputSecond%3600)/60, (inputSecond%3600)%60);
	
	return 0;
	

} 
