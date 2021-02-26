#include <stdio.h>
#include <conio.h>
#include <string.h>

#define n 10

main()

{

int i,k; float sum; //k-количество искомых товаров, sum- их общая стоимость

struct tov {char name[10]; float c; int kol;} t; //Объявление структуры t

struct tov mag[n]; //объявление массива структур mag[n]

char nazv[10]; //Наименование искомого товара

clrscr();

printf(“\n Введите информацию о товарах \n“);

for (i=0; i<n; i++)

{ printf("\n наименование , цена, количество : ");

scanf("%s %f %d",t.name,&t.c,&t.kol);//Заполнение информацией структуры t

mag[i]=t; //Присвоение i-му элементу массива структуры t целиком

}

printf("\n введите искомый товар: ");

scanf("%s",nazv);

for (i=0,sum=0,k=0; i<n; i++)

if (strcmp(mag[i].name, nazv)==0)

{ sum+=mag[i].c*mag[i].kol;

k++;

}

+printf("Товаров %s %d, их стоимость %5.2f ",nazv,k,sum);

getch();

}
