#include <stdlib.h>
#include <stdio.h>

typedef struct Rectangle
{
    int length;
    int width;
    char extra_thing;
} Rectangle;

int main()
{
    printf("%lu\n", sizeof(Rectangle));
    Rectangle r;
    Rectangle r2 = {10, 5};

    printf("Width of Rectangle is %d\n", r2.width);
    return EXIT_SUCCESS;
}