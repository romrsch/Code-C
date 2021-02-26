#include <stdio.h>

float sqr(float a); /* Прототип объявления функции */

int main(void)
{
	float b;
	printf("Введите число с точкой: \n");
	scanf("%f", &b);


	printf("Квадрат числа %.2f равен %.2f \n", b, sqr(b) );
	return 1;
}

float sqr(float a) // Описание (определение) функции
{
	return a*a;
}
