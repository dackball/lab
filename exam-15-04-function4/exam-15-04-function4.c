#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

// �Է°��� ��ȯ���� ��� ���� �Լ�
void guide(void)
{
	printf("inputNunmber �Լ��� ���� ������ �Է��Ҽ� �ֽ��ϴ�.\n");
	printf("���� printNunmber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}
// �Է°��� �����ϴ� ���
void printNunmber(int num)
{
	printf("����� �Է��� ������ %d �Դϴ�.\n", num);
}
//��ȯ���� �����ϴ� �Լ�
int inputNunmber(void)
{
	int num;
	printf("������ �Է��� �ּ��� : ");
	scanf("%d", &num);

	return num;
}

int main(void)
{
	guide();
	int num = inputNunmber(); // ��ȯ���� �����Ҽ� �ִ�
	printNumber(num);
	return 0;
}