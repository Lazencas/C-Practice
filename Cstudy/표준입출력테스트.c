#include<stdio.h>
#include<stdint.h> 
#include<conio.h>
/*
예제 

*/

/*----------------- Function declaration -----------------*/
int main(void); //메인함수  

/*--------------- Function declaration End ---------------*/


int main(void){
    uint8_t ch = 0;
    ch = getchar();
	putchar(ch);	
	uint8_t ch2 = 0;
	ch2 = _getch(); //버퍼를 거치지 않고 바로 출력  
	putchar(ch2); 
	
	return 0;
	

} 
