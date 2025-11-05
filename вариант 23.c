#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int a, n;
    int result = 1;
    printf("¬ведите значение a: ");
    scanf("%d", &a);
    printf("¬ведите значение n: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("ќшибка: n должно быть неотрицательным числом\n");
    }

    for (int i = 0; i < n; i++) 
    {
        result = result*(a + i);
    }
    printf("–езультат: %d\n", result);
    return 0;
}