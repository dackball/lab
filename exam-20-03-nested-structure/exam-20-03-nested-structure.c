/*
��ø ����ü
	��� ������ ����ü ���� ����
*/
#include <stdio.h>

typedef struct
{
	char title[100];
	int published;
}Book;

typedef struct
{
	Book book;  // 	��� ������ ����ü ���� ����!
}Bag;

int main(void)
{
	/*
	����ü ������ ����� ���ÿ� �ʱ�ȭ
	�̶� ��� ���� ���� ����� ���ÿ� �ֱ�ȭ
	*/
	Bag myBag = {
		("���� ���� ������ ���� �ϰڴ°�", 2018)
	};

	//��������ν��� ����ü ������ ������ ������ ��� �����ڴ� �����ϴ�
	printf("å ���� : %s \n �Ⱓ�⵵ : %d��\n", myBag.book.title, myBag.book.published);

	return 0;
}