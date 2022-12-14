/*
malloc 함수를 사용하여 지역변수 문제 해결!
*/
#include <stdio.h>
#include <stdlib.h>

// 반환 타입이 char 포인터 변수
char* getString(void)
{


	/*
		지역변수 char str[100]; 를 
		malloc 함수를 이용한 heap영역 메모리 동적 할당
	*/
	char str = (char*)malloc(sizeof(char) * 100);
	printf("좋아하는 단어는 ?");
	gets(str); //문자열 입력함수 scanf 비슷

	if (str != NULL)free(str);
	return str;
}

int main(void)
{
	char* result = getString();
	printf("당신이 좋아하는 단어는 : %s\n", result);

	if (result != NULL)free(result);
	return 0;
}