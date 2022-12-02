/*
구조체 배열
	일반적인 변수 배열과 동일
*/
#include <stdio.h>
#include <string.h>

struct person
{
	char name[30];
	int age;
};

int main(void)
{
	//길이가 3인 구조체 배열 선언 및 초기화
	struct person boy = { "김소년", 12 };
	

	struct person girl[3];
	int i;

	strcpy(girl[0].name, "이소녀");
	strcpy(girl[1].name, "박소녀");
	strcpy(girl[2].name, "김소녀");
	girl[0].age = 9;
	girl[1].age = 13;
	girl[2].age = 7;

	for (i = 0; i < 3; 1++) {
		printf("소년의 이름은 %s, 나이는 %d세\n", boy[i].name, boy.age);
		printf("소녀의 이름은 %s, 나이는 %dtp\n", girl[i].name, girl.age);
	}

	return 0;
}