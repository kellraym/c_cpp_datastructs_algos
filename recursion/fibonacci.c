#include <stdio.h>

int fib_naive(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib_naive(n - 1) + fib_naive(n - 2);
}

int fib_iter(int n)
{
    if (n <= 1) return n;

    int s = 0;
    int t0 = 0, t1 = 1;
    

    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

// for memoization function below
int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fib_memo(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    if (F[n-2] == -1) F[n-2] = fib_memo(n - 2);
    if (F[n-1] == -1) F[n-1] = fib_memo(n - 1);

    return F[n-2] + F[n-1];
}

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("%d %d", fib_naive(x), fib_iter(x));
    printf(" %d", fib_memo(x));
    return 0;
}