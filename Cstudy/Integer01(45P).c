#include <stdio.h>

//�ʱ� �� �ۼ� 
int main(void){ 
    //ASCII�ڵ�, ��ȣ�� �ִ� 1byte ������ 
	char ch = 'A'; //-128~127
	
	//�����ڵ忡�� �����ϳ��� �����Ҽ� �ִ� ���� 
	wchar_t wch = L'A'; //2����Ʈ �ڷ���  
	
	short sData = 10;// -32768 ~ 32767 2��15�� 
	int nData = 10; //-2147483648 ~ 2147483647 2��31�� 
	long lData = 10L;// int�� ����  
	long int lnData = 10L;
	long long int llnData = 10LL;
	
	//unsigned ���̸� U�� �ٰ� long ���̸� L�� ���� 
	unsigned char byNewData = 0; //0~255
	unsigned short sNewData = 65535U;// 0~65535
	unsigned int uNewData = 1U; //0~4294967295
	unsigned long int ulNewData = 1UL;
	unsigned long long int ullNewData = 1ULL; 
	
	//�Ǽ��� 
	float fData = 123.123456; //�Ǽ��� ǥ���ϴ� 4����Ʈ ��������, �Ҽ��� ���� 6�ڸ����� ��ȿ  	
	double dData = 123.123456789012345; //8����Ʈ, �Ҽ��� 15��° �ڸ����� ��ȿ  
	
	//���ڿ� = �����ǹ迭, �����ν��Ͻ��� �� �� ����� �̷� ����ü�̰� �ּҿ� �̸��� �ο��Ѵ�.
	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
	char szData[4] = {'A', 'B', 'C'};
	char szNewData[4] = {"ABC"}; 
	
	return 0;
}
