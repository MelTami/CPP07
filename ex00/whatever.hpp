#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

// Macros
# define RESET   "\033[0m"
# define BLUE    "\033[1;34m"

template <typename T> T const &max(T x, T y){
    return (x > y ? x : y);
}

template <typename T> T const &min(T x, T y){
    return (x < y ? x : y);
}

template <typename T> void swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
}


#endif

