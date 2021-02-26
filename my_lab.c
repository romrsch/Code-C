#include <stdio.h>
#include <stdlib.h>

int in(int array[], int n);
int out(int array[], int n);
int max(int array[], int n);

int main()
{
	int a[5],b[6];

	in(a,5);
	out(a,5);

	in(b,6);
	out(b,6);

	return 0;
}

int in(int array[], int n)
{
	for(int i=0; i<n; i++)
		array[i]=rand()%100;
		printf("\n");
}

int out(int array[], int n)
{
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%3d", array[i]);
	printf("\n");
}

int max(int array[], int n){



}