#include <stdio.h>
#include <locale.h>

int fatorial(int num)
{
    if (num > 0)
        return num * fatorial(num - 1);
    else
        return 1;
}

int main()
{
    setlocale(LC_ALL, "");
    int num = 0, fat;
    do
    {
        printf("Digite um número inteiro entre 0 e 16: ");
        scanf("%d", &num);
    } while (num <= 0 || num >= 16);
    fat = fatorial(num);
    printf("%d! = %d\n", num, fat);
    return 0;
}