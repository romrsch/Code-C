#include<stdio.h>

// N = 4 - число элементов в массиве
// N-N = 0 - начальный элемент в массиве
// N-1 = 4-1 =3 - максимальный элемент массива.

#define SIZE 4

int main()
{
	// float price =12.0f; 
	float prices[SIZE]={ 1000.0f, 2000.0f, 3000.0f, 4000.0f }; // декларирования и инициализация в одной строке
	
		printf("0: %10.2f \n", prices[SIZE-SIZE]);
		printf("1: %10.2f \n", prices[SIZE - (SIZE-1)]);
		printf("2: %10.2f \n", prices[SIZE - (SIZE-2)]);
		printf("3: %10.2f \n", prices[SIZE - (SIZE-3)]);
	return 0;
}
