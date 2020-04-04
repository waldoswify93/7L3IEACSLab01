#include <iostream>

#include "problem1.h"

namespace problem1 {
void swap(int & a, int & b) {
    int c = a;
    a = b;
    b = c;
}

bool same_sign(const int & a, const int & b) {
    if (a * b > 0)
        return true;
    else
        return false;
}

int even_odd(const int & a) {
    if (a % 2 == 0)
        return EVEN;
    else
        return ODD;
}

void display_first() {
    std::cout << "first" << std::endl;
}

void display_first_second(const int & choice){
    if (choice == 0)
        std::cout << "first" << std::endl;
    else
        std::cout << "second" << std::endl;
}

}

