/*
4. ��������
   && (AND) : �ǿ����ڰ� ��� ���̸� ��
   || (OR) : �ǿ����� �� ���� ������ ��
   ! (NOT) : �ǿ������� ���̸� ����, �����̸� ��(����)

5.���� ���� ������
   ���� ? ���ϰ�� ��� : �����ϰ�� ���

6. ��Ʈ ���� ������
   & : ������ �Ǵ� ��Ʈ�� ��� 1�̸� 1�� ��ȯ��. (��Ʈ AND ����)
   | : ������ �Ǵ� ��Ʈ �߿��� �ϳ��� 1�̸� 1�� ��ȯ�� (��Ʈ OR ����)
   ^ : ������ �Ǵ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ��. (��Ʈ XOR ����)
   ~ : ��Ʈ�� 1�̸� 0����, 0�̸� 1�� ��������. (��Ʈ NOT ����)

*/
#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

int main(void)
{
	// ��������
	printf("�� ������ \n");
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("1) result : % d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("2) result : %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("3) result : %d\n", result);


	//���� ������
	printf("���� ������ \n");

	int num, absolute;
	printf("�����Է� : ");
	/*scanf("%d", &num);*/

	absolute = num > 0 ? num : num * -1;
	printf("���밪 : %d\n", absolute);

	//��Ʈ ������
	printf("��Ʈ ������ \n");
	int a = 3;   // 0000 0011
	int b = 5;   // 0000 0101

	printf("3 & 5 = %d\n", a & b);
	printf("3 | 5 = %d\n", a | b);
	printf("3 ^ 5 = %d\n", a ^ b);
	printf("~3 = %d\n", ~a);
}