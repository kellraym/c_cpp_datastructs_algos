#include <iostream>

template <class T> // this needs to be before every use
class Arithmetic
{
    private:
        T a;
        T b;

    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template<class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<int> ar(5, 6);
    std::cout << ar.add() << std::endl;

    Arithmetic<float> ar2(5.4, 7.648);
    std::cout << ar2.sub() << std::endl;
    return 0;
}
