#include <stdlib.h>
#include <stdio.h>

struct Thing
{
    int int_arr[6];
    int a;
};

void change_array(struct Thing t) // all member vars are copied including arrays, neat
{
    t.int_arr[3] = 20;
}

int main()
{
    struct Thing t = {{1, 2, 3, 4, 5, 6}, 1};
    printf("%d\n", t.int_arr[3]);
    change_array(t);
    printf("%d", t.int_arr[3]);
    return EXIT_SUCCESS;
}