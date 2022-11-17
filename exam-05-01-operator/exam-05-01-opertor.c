/*
연산자

   1. 산술연산자
      +, -, *, /, %
   2. 대입연산자
*/

#include <stdio.h>
int main(void)
{
    // 산술연산자
    printf("산술 연산자 \n");
    int num1 = 7, num2 = 3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    // 대입연산자
    printf("대입 연산자 \n");
    int num3 = 3, num4 = 4;
    num3 += 3;
    num4 += 4;
    printf("num3 += 3 의 결과 : %d\n", num3);
    printf("num4 += 4 의 결과 : %d\n", num4);
}