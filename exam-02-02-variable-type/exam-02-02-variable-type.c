/*
C��� �⺻ �ڷ��� ����
   char             1����Ʈ   -128 ~ +127
   short            2����Ʈ   -32,768 ~ +32,767
   int                4����Ʈ   -2,147,483,648 ~ +127
   long             4����Ʈ
   long long     8����Ʈ
					   
   float             4����Ʈ   ��3,4x10
   double         8����Ʈ
   long double 8����Ʈ
*/

#include <stdio.h>

int main(void) {
	//���� �Ǿ� ���� ���� ���� ó���Ҷ� �����Ϸ���
	printf("sizeof(100) : %d\n", sizeof(100));
	printf("sizeof(3.14): %d\n", sizeof(3.14));


	// �ƽ�Ű�ڵ� ���ڰ����� ���
	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}