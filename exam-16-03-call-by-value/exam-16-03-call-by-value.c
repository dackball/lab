/*
Call by value
	�⺻���� ���� �Ű�����, ������ ����
*/

#include <stdio.h>
void swapNumber(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = num1;
	printf("�Լ� �ȿ��� Ȯ���� ���, num1 : %d num2: %d\n", num1, num2);

}

int main(void)
{
	int number1 = 33, number2 = 99;
	printf("�Լ� ȣ�� �Ϸ��� Ȯ���Ѱ��, number1 : %d, number2 : %d\n", nember1, number2);
	return 0;
}