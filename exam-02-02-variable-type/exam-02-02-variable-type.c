/*
C언어 기본 자료형 종류
   char             1바이트   -128 ~ +127
   short            2바이트   -32,768 ~ +32,767
   int                4바이트   -2,147,483,648 ~ +127
   long             4바이트
   long long     8바이트
					   
   float             4바이트   ±3,4x10
   double         8바이트
   long double 8바이트
*/

#include <stdio.h>

int main(void) {
	//정의 되어 있지 않은 값을 처리할때 컴파일러는
	printf("sizeof(100) : %d\n", sizeof(100));
	printf("sizeof(3.14): %d\n", sizeof(3.14));


	// 아스키코드 문자값으로 출력
	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}