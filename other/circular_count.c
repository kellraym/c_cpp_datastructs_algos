#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    uint8_t num = 0;

    for (int i = 0; i < 500; i++, num++)
    {
        printf("%d ", num % 8);
    }
    return 0;
} 