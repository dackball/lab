/*
typedef
	�ڷ��� �̸��� ������� ���ϼ� �ִ�.
	�ڷ��� 
*/
#include <stdio.h>
//int �� ����, int �� ����������, ��ȣ���� ������ int�� ������ ���� �̸� ���̱�
typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main(void)
{
	//���� ������ ����� �ڷ��� �̸��� ���� ����
	typedef char CHAR;
	typedef char* STR;

	// typedef �������� �ڷ����� ���� �ڷ����� ������ ���� �����Ѵ�.
	INT num = 3;
	PINT ptr = &num;
	UINT unum = 5;

	CHAR ch = 'c';
	STR str = "Hello!";

	int num2 = 4;

	pritf("%d %d %d\n", num, *ptr, unum);
	pritf("%c %s\n", ch, str);
	printf("%d\n", num2)

	return 0;
}
