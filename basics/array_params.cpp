#include <iostream>

void fun(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
}

int* return_arr()
{
    // return (int*) malloc(sizeof(int) * 5);
    return new int[5];
}

int main()
{
    int a[] = {1, 2, 3, 4};
    fun(a, 4);
    int *b = return_arr();

    for (int i = 0; i < 4; i++)
    {
        b[i] = i + 3;
        std::cout << b[i] << std::endl;
    }

    delete[]b;
    return 0;
}