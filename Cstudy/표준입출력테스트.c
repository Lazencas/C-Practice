#include<stdio.h>
#include<stdint.h> 
#include<conio.h>
/*
���� 

*/

/*----------------- Function declaration -----------------*/
int main(void); //�����Լ�  

/*--------------- Function declaration End ---------------*/


int main(void){
    uint8_t ch = 0;
    ch = getchar();
	putchar(ch);	
	uint8_t ch2 = 0;
	ch2 = _getch(); //���۸� ��ġ�� �ʰ� �ٷ� ���  
	putchar(ch2); 
	
	return 0;
	

} 
