#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>



int main()
{
    uint8_t t = 0b00100111;
    if ((t >> 0) & 0b00000001)
    {
        printf("Condition 1 true\n");
    }

    if ((t >> 1 & 0b00000001))
    {
        printf("Condition 2 true\n");
    }

    if ((t >> 2 & 0b00000001))
    {
        printf("Condition 3 true\n");
    }

    if ((t >> 3 & 0b00000001))
    {
        printf("Condition 4 true\n");
    }

    if ((t >> 4 & 0b00000001))
    {
        printf("Condition 5 true\n");
    }

    if ((t >> 5 & 0b00000001))
    {
        printf("Condition 6 true\n");
    }

    if ((t >> 6 & 0b00000001))
    {
        printf("Condition 7 true\n");
    }

    if ((t >> 7 & 0b00000001))
    {
        printf("Condition 8 true\n");
    }


    printf("%d\n", t);
    t = t | 0b00001000;
    printf("%d\n", t);
    return 0;
}