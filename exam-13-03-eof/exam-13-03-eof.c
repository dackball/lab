/*
EOF(End Of File)
	�ؽ�Ʈ ������ �о� ���� �� ������ ���� ��Ÿ
*/
#include <stdio.h>

int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();

		if (ch == EOF)
			break;

		putchar(ch);
	}
	return;
}