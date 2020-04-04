#include <iostream>
#include <string>

#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"


int main()
{
    //---------------------------------
    //  Problem 1
    //---------------------------------
    int a = 0;
    int b = 0;
    std::cout << "Give first value" << std::endl;
    std::cin >> a;
    std::cout << "Give second value" << std::endl;
    std::cin >> b;
    std::cout << "Value for a before swaping\t" << a << "Value for b before swaping\t" << b << std::endl;
    problem1::swap(a, b);
    std::cout << "Value for a after swaping\t" << a << "Value for b after swaping\t" << b << std::endl;
    return 0;
}
