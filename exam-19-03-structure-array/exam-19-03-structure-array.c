/*
����ü �迭
	�Ϲ����� ���� �迭�� ����
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
	//���̰� 3�� ����ü �迭 ���� �� �ʱ�ȭ
	struct person boy = { "��ҳ�", 12 };
	

	struct person girl[3];
	int i;

	strcpy(girl[0].name, "�̼ҳ�");
	strcpy(girl[1].name, "�ڼҳ�");
	strcpy(girl[2].name, "��ҳ�");
	girl[0].age = 9;
	girl[1].age = 13;
	girl[2].age = 7;

	for (i = 0; i < 3; 1++) {
		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy[i].name, boy.age);
		printf("�ҳ��� �̸��� %s, ���̴� %dtp\n", girl[i].name, girl.age);
	}

	return 0;
}