#include <stdio.h>

int primo(int num)
{
    int i, primo = 1;
    if (num > 3)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
                primo = 0;
        }
    }
    return primo;
}

int main()
{
    int i;
    for (i = 50000; i > 1; i--)
        if (primo(i))
            printf("%d, ", i);
    return 0;
}