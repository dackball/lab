#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

// 입력값과 반환값이 모두 없는 함수
void guide(void)
{
	printf("inputNunmber 함수를 통해 정수를 입력할수 있습니다.\n");
	printf("또한 printNunmber 함수를 통해 입력한 정수를 출력할 수도 있습니다.\n");
}
// 입력값만 존재하는 경우
void printNunmber(int num)
{
	printf("당신이 입력한 정수는 %d 입니다.\n", num);
}
//반환값만 존재하는 함수
int inputNunmber(void)
{
	int num;
	printf("정수를 입력해 주세요 : ");
	scanf("%d", &num);

	return num;
}

int main(void)
{
	guide();
	int num = inputNunmber(); // 반환값을 저장할수 있다
	printNumber(num);
	return 0;
}