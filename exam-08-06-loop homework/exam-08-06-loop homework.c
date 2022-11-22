#include <stdio.h>
int main(void)
/*
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *     
   */
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (i < 4) {
				if (j + i < 7 / 2) {
					printf(" ");
				}
				else if (j - i > 7 / 2)
				{
					printf(" ");
				}
				else {
					printf("*");
				}
			}
			else 
			{
				if (i - j > 3)
				{
					printf(" ");
				}
				else if (i + j > 9) {
					printf(" ");
				}

				else {
					printf("*");
				}
			}
		}
		printf("\n");
	}

}
//#include <stdio.h>
//int main(void)
//
//{
//	int i, j;
//	//for (i = 0; i < 7; i++) // Çà(ÁÙ)
//	//{
//	//	printf("%d : ", i);
//	//	for (j = 0; j < i+1; j++) // ¿­(Ä­)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//} 
//}