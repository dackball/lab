/*
printf() �Լ�
   �ܼ� ȭ�鿡 ���ڿ� ����Լ�

�����
   \t ��(tab)
   \n �ٹٲ�
   \b �� ĭ �������� �̵�
   \r 
   \a 
   \' 
   \" 
   \? ����ǥ
   \\ �齽����
   
���Ĺ���
   %d : ��ȣ�ִ� 10����
   %u : ��ȣ���� 10����
   %o : ��ȣ���� 8����
   %x : ��ȣ���� 16����
   %f : 10������ ����� �ε��Ҽ��� �Ǽ�
   %e : ���� ����� �ε��Ҽ��� �Ǽ�
   %g : ���� ���� %f�� %e �� ����
   %c : ���� �����ϴ� ����
   %s : ���ڿ�
   %p : ������ �ּҰ�
   %% : %�� ��� ���ڷ�
*/
#include <stdio.h>

int main(void)
{
	//�ֿܼ� ����ϱ�
	printf("T love C languge!\n");
	printf("It is so funny!\n");

	/*
	�̽������� ������ \��ȣ��
	�۲ÿ� ���� �� ��ȣ�� ��ü �����մϴ�
	*/
	printf("\"I am a boy.\"\n");
	printf("I am a \'boy\".\n");
	printf("I \tam \ta \tboy");
	printf("I \bam a boy.\n");
	printf("I am a boy.\\\?\n");

	char character = 'X';
	int inumber = 92;
	double dnumber = 20.201005;
	printf("%c\n", character);
	printf("%d\n", character);
	printf("%d\n", inumber);
	printf("%x\n", inumber);
	printf("%o\n", inumber);
	printf("%f\n", dnumber);
	printf("%e\n", dnumber);
}