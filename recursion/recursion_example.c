#include <stdio.h>

void recursive_print(int x)
{
    if (x > 0)
    {
        printf("%d\n", x);
        recursive_print(x - 1);
    }
}

int main()
{
    recursive_print(100);
    return 0;
}