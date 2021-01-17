#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int* arr;  // указатель на массив
    int i, j, n;
    system("chcp 1251");
    system("cls");
    printf("Введите размер массива: ");
    scanf("%d", &n);
    // Выделение памяти
    arr = (int*)malloc(n * sizeof(int));
    // Ввод элементов массива
    for (i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    // Вывод элементов массива

    for (i = 0; i < n - 1;)
    {

        if (n % 2 != 0)
        {
            printf("%d", arr[n - i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
        i++;
    }

    free(arr);
    getchar();   getchar();
    return 0;
}