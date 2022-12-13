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
    uint8_t szName[32] = {0};
    gets(szName);
    printf("입력값출력");
    puts(szName);
    
  
	return 0;
	

} 
