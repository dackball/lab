/*
����ü (Structure)
	�ϳ��̻��� ������ �Ѳ����� ��� ����� ���ο� ���O�� �ڷ���
	����� ���� �ڷ����̶�� �θ��⵵ �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person
{
	char name[30];
	int age;

};

int main(void)
{
	struct person boy, girl;

	//name ��� ������ ���� ����
	strcpy(boy.name, "��ҳ�");
	strcpy(girl.name, "�̼ҳ�");

	// age ��� ������ ���� ����
	boy.age = 12;
	girl.age = 9;
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
	printf("�ҳ��� �̸��� %s, ���̴� %dtp\n", girl.name, girl.age);

	return 0;
}