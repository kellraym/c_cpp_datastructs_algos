#include <iostream>

int main()
{
    int *p = new int[5];
    delete[]p;
    return 0;
}