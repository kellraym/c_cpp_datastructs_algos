#include <stdio.h>

int pow_recursive(int n, int power)
{
    if (power > 1) return pow_recursive(n, power - 1) * n;
    return n;
}

int better_pow(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }

    if (power % 2 == 0)
    {
        return better_pow(n * n, power / 2);
    }

    return better_pow(n * n, (power - 1) / 2) * n;

}

int main()
{
    printf("%d %d", pow_recursive(2, 8), better_pow(2, 8));
    return 0;
}