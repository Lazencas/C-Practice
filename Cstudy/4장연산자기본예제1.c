#include<stdio.h>
#include<stdint.h> 
#include<conio.h>

/*
���� 
����ڷκ��� �� ������ �Է¹޾� ����� ����Ͽ� ����Ѵ� > �Ҽ��� ��°�ڸ������� ǥ���ϸ� ������ 2���� �����Ѵ�. 
*/

/*----------------- Function declaration -----------------*/
int main(void); //�����Լ�  

/*--------------- Function declaration End ---------------*/


int main(void){
	//�Է¹��� �� ������ ���� ���� inputIntA, inputIntB �� �����ϰ� 0���� �ʱ�ȭ ���ش�. 
    uint32_t inputIntA = 0;
    uint32_t inputIntB = 0;
	
	printf("�� ������ �Է��ϼ���: ");
	//scanf�Լ��� �ΰ��� ���� �Է¹޾� ��հ��� ����Ѵ�. 
	scanf("%d%d", &inputIntA, &inputIntB);	
    printf("�� ���� ��հ�: %.2f", (inputIntA+inputIntB)/2.0);    
	return 0;
	

} 
