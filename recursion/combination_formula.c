#include <stdio.h>

int c(int n, int r)
{
    // literally just uses pascal's triangle
    if (r == 0 || n == r) return 1;
    return c(n-1, r-1) + c(n-1, r);
}

int main()
{
    printf("number of choices: %d", c(5, 2));
    return 0;
}