#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T> void iter(T *array, size_t len, void (*f)(T const &) )
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void printChar(T const &x)
{
    std::cout << x << std::endl;
}

#endif