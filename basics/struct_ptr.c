#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    r.length = 15;
    // (*p).length = 20;
    p->length = 20;

    p = (struct Rectangle *) malloc (sizeof(struct Rectangle));
    p->length = 10;
    p->width = 20;

    free(p);
    return EXIT_SUCCESS;
}