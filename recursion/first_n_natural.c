#include <stdlib.h>
#include <stdio.h>

int first_n(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }

    return sum;
}

int first_n_recursive(int x)
{
    if (x > 1)
    {
        return x + first_n_recursive(x - 1);
    }
    return x;
}

int main()
{
    printf("%d ", first_n(8));
    printf("%d ", first_n_recursive(8));
    return 0;
}