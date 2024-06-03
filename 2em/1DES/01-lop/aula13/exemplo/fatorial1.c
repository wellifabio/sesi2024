#include <stdio.h>
#include <locale.h>

int fatorial(int num)
{
    int result = num, i;
    if (num > 0)
    {
        for (i = 1; i < num; i++)
            result = result * i;
        return result;
    }
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