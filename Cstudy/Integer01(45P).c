#include <stdio.h>

//필기 겸 작성 
int main(void){ 
    //ASCII코드, 부호가 있는 1byte 정수형 
	char ch = 'A'; //-128~127
	
	//유니코드에서 문자하나를 저장할수 있는 공간 
	wchar_t wch = L'A'; //2바이트 자료형  
	
	short sData = 10;// -32768 ~ 32767 2의15승 
	int nData = 10; //-2147483648 ~ 2147483647 2의31승 
	long lData = 10L;// int와 같음  
	long int lnData = 10L;
	long long int llnData = 10LL;
	
	//unsigned 형이면 U가 붙고 long 형이면 L이 붙음 
	unsigned char byNewData = 0; //0~255
	unsigned short sNewData = 65535U;// 0~65535
	unsigned int uNewData = 1U; //0~4294967295
	unsigned long int ulNewData = 1UL;
	unsigned long long int ullNewData = 1ULL; 
	
	//실수형 
	float fData = 123.123456; //실수를 표현하는 4바이트 단정도형, 소수점 이하 6자리까지 유효  	
	double dData = 123.123456789012345; //8바이트, 소수점 15번째 자리까지 유효  
	
	//문자열 = 문자의배열, 여러인스턴스가 모여 한 덩어리를 이룬 집합체이고 주소에 이름을 부여한다.
	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
	char szData[4] = {'A', 'B', 'C'};
	char szNewData[4] = {"ABC"}; 
	
	return 0;
}
