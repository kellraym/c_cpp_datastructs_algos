#include <stdio.h>

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

double e_horners(int x, int n)
{
    double s = 1;
    for (;n > 0; n--)
    {
        s = 1 + x / (double) n * s;
    }

    return s;
}

double e_horners_recursive(int x, int n)
{
    static int s = 1;

    if (n == 0) return s;

    s = 1 + x / (double) n * s;
    return e(x, n - 1);
}

int main()
{
    printf("%lf %lf", e(2, 3), e_horners(2, 3));
    return 0;
}