#include <stdlib.h>
#include <stdio.h>

int recursive_add(int x, int y)
{
    if (x == 0) return y;
    return recursive_add(--x, ++y);
}

int main()
{
    printf("%d", recursive_add(5, 4));
    return 0;
}