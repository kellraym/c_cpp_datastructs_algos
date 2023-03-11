#include <stdio.h>

int factorial_recur(unsigned n)
{
    if (n == 0) return 1;

    if (n > 2)
    {
        return factorial_recur(n - 1) * n;
    }
    return n;
}

int factorial(unsigned n)
{
    if (n == 0) return 1;
    int prod = 1;
    for (int i = 2; i <= n; prod *= i++);
    return prod;
}

int main()
{
    printf("%d %d", factorial(1), factorial_recur(1));
    return 0;

}