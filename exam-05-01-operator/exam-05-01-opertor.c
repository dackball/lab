/*
������

   1. ���������
      +, -, *, /, %
   2. ���Կ�����
*/

#include <stdio.h>
int main(void)
{
    // ���������
    printf("��� ������ \n");
    int num1 = 7, num2 = 3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    // ���Կ�����
    printf("���� ������ \n");
    int num3 = 3, num4 = 4;
    num3 += 3;
    num4 += 4;
    printf("num3 += 3 �� ��� : %d\n", num3);
    printf("num4 += 4 �� ��� : %d\n", num4);
}