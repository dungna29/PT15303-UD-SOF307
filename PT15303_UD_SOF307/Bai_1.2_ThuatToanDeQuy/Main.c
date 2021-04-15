#include <stdio.h>
void inRaManHinh(int arrNumber[],int i)
{	
	printf("%d ", arrNumber[i]);
	i++;
	if (i < 6)
	{
		inRaManHinh(arrNumber,i);
	}
}
int main()
{
	int arrNumber[] = { 99,66,88,77,11,00 };
	
	 //Cách 1: Sử dụng vòng lặp for
	 // for (int i = 0; i < 6; i++)
	 // {
	 // 	printf("%d ", arrNumber[i]);
	 // }
	 // printf("\n");
	
	 //Cách 2: While
	 // int i = 0;
	 // while (i < 6)
	 // {
	 // 	printf("%d ", arrNumber[i]);
	 // 	i++;
	 // }
	
	 printf("\n");
	 //Cách 3: do While
	 // i = 0;
	 // do
	 // {
	 // 	printf("%d ", arrNumber[i]);
	 // 	i++;
	 // }
	 // while (i < 6);

	//Cách 4: Sử dụng đệ quy để in mảng số
	inRaManHinh(arrNumber, 0);
}