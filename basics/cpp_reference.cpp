#include <iostream>

int main()
{
    int a = 10;
    int &r = a;

    a++;
    std::cout << r;
    return 0;
}
