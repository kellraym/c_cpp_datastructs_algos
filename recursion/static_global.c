#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++; // incremented in each call to the stack, end value is added to all function calls when it resolves at n=0
        return fun(n - 1) + x;
    }

    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d", r);
    return 0;
}