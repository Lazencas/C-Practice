#include<stdio.h>
#include<stdint.h> 
#include<conio.h>

/*
���� 
����ڷκ��� ������ �ʸ� �Է¹ھ� '��:��:��' �������� ����ϴ� ���α׷��� �ۼ��Ѵ� > 
��� ���ڸ� ������ ǥ���ϸ� ���ڸ� ������ ��� �տ� 0�� �ٿ� ����ؾ��Ѵ�. 
*/

/*----------------- Function declaration -----------------*/
int main(void); //�����Լ�  

/*--------------- Function declaration End ---------------*/


int main(void){
	//����ڷκ��� �Է¹��� �ʸ� ���� ������ �����ϰ� 0���� �ʱ�ȭ�Ѵ�. 
	uint32_t inputSecond = 0;
	printf("���ϴ� �ð� (��)�� �Է��ϼ���: ");
	scanf("%d", &inputSecond);
	
	// inputSecond/3600 = �ð�  (inputSecond%3600)/60 = ��  (inputSecond%3600)%60 = �� 
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", inputSecond,inputSecond/3600, (inputSecond%3600)/60, (inputSecond%3600)%60);
	
	return 0;
	

} 
