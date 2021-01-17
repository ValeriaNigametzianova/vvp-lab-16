#include <stdio.h>
int main()
{
    int N; 
    int* array1;
    int i;
    system("chcp 1251");
    system("cls");
    printf("enter N: ");
    scanf_s("%d", &N);
    array1 = (int*)malloc(N * sizeof(int));

    int a,b, c=0;
    printf("a and b: ");
    scanf_s("%d%d", &a, &b);
    if (N>=3)
    {
        array1[0] = a;
        array1[1] = b;
        for (int i = 2; i <= N; i++)
        {
            c = a + b; // вычисляем следующее число как сумму двух предыдущих
            array1[i] = c;
            a = b; b = c; // перемещаем два предыдущих числа
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", array1[i]);
    }
    getchar(); getchar();
    return 0;
}