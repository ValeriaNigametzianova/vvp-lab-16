#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
	int N;
	int* array1;
	int i, j=1;
	system("chcp 1251");
	system("cls");
	printf("enter N: ");
	scanf_s("%d", &N);
	array1 = (int*)malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		array1[i] = j;
		j += 2;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d", array1[i]);
	}
	free( array1);
	getchar();
	return 0;
}
