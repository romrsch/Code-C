#include <stdio.h>
 
int main()
{
    int i, n;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int mas[n];
    //srand(time(0));
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {
        mas[i] = rand() % 100; // диапазон случайных чисед от 0 до 100
        printf("%d ", mas[i]);
    }
    putchar('\n');
    system("pause");
    return 0;
}