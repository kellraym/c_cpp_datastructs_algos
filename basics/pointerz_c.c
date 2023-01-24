#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1 = 5;
    int* pnum1 = &num1;
    printf("%d | %d\n", sizeof(num1), sizeof(pnum1));
    
    int* p = (int *) malloc(5 * sizeof(int));
    *(p + 2) = 3;
    printf("%d\n", p[2]);
    free(p);

    int* p2 = (int *) calloc(5, sizeof(int));
    printf("%d\n", p2[4]);

    return EXIT_SUCCESS;
}