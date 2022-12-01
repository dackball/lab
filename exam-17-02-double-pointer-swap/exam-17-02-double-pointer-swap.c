#include <stdio.h>

void swapNumber(int** dptr1, int** dptr2)
{
	printf("%d, %d\n", *dptr1, *dptr2);

	int* temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;

}

int main(void)
{
	int num1 = 66, num2 = 99;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("*ptr1 : %d *ptr2 : %d\n", *ptr1, *ptr2);
	swapNumber(&ptr1, &ptr2);
	printf("*ptr1 : %d *ptr2 : %d\n", *ptr1, *ptr2);

	return 0;
}