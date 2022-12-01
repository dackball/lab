/*
포인터
   메모리의 주소값을 의미하며 주소값을 저장하는 변수를 가리켜
   '포인터 변수'라고 한다.
   

   & 주소 연산자 : 변수 앞에 붙어서 변수의 메모리 시작 주소값을 구한다.
   * 포인터 : 표인터 변수를 선언할때 사욜
   *  간첩 참조 연산자 : 선언된 포인터 변수가 가리키는 변수
*/
#include <stdio.h>
int main(void)
{
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;


	// 포인터 * 연산자 선언, 참조&연산자 대입으로 포인터 변수 생성.
	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	// 포인터 변수의 출력에는 형식문자 %p 를 사용할 수 있다
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);


	int num = 10;
	int* pnum;
	pnum = &num; // 포인터 변수 pnum은 num의 주소를 저장함

	printf("%d", *pnum);

	pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	return 0;
}