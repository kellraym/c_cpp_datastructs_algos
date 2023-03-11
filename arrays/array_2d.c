#include <stdlib.h>
#include <stdio.h>

int main()
{
    int **array_2d = (int **) calloc(3, sizeof(int **));

    for (int i = 0; i < 3; i++)
    {
        array_2d[i] = (int *) calloc(4, sizeof(int *));
        for (int j = 0; j < 4; j++)
        {
            array_2d[i][j] = j + 1;
        }
    }

    printf("%d %d %d %d", array_2d[0][0], array_2d[1][1], array_2d[2][2], array_2d[0][3]);

    for (int i = 0; i < 3; i++) free(array_2d[i]);
    free(array_2d);
    return 0;
}