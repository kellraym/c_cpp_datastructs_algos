#include <stdio.h>

int summation(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + summation(n - 1);
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int power(int n, int p)
{
    if (p == 0) return 1;
    if (p % 2 == 0) return power(n * n, p / 2);
    return power(n * n, (p - 1) / 2) * n;
}

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0) return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

int main()
{
    printf("%d %d %d %f", summation(5), factorial(5), power(2, 9), e(2, 3));
    return 0;
}