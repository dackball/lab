/*
���ڿ�
	c���� ���ڿ��� ū����ǥ(")�� �̿��ؼ� ǥ��
	���ڿ��� ����(char)�� �̷���� �迭
	���ڿ� ���� ��(Null) ���ڷ� ǥ��

*/
#include <stdio.h>

int main(void)
{
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("1-1 : %s \n", good);
	printf("1-2 : %s \n", bad);
	printf("1 : %p %p \n", good, bad);

	//�迭 ����� ���ڿ� ����
	good[0] = 'H'; //�� ���氡��
	//good = "New Good"; �Ұ���

	//������ ����� ���ڿ� ����
	//bad[0] = 'S';//�� ���� �Ұ���

	printf("1 : %s \n", good);
	printf("2 : %s \n", bad);
}