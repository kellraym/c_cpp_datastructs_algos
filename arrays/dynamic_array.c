#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;

    p = (int *) malloc(sizeof(int) * 5);
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
    {
        printf("%d %d\n", A[i], p[i]);
    }

    return 0;
}   