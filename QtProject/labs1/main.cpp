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
//    std::cout << "Give first value" << std::endl;
//    std::cin >> a;
//    std::cout << "Give second value" << std::endl;
//    std::cin >> b;
//    std::cout << "Value for a before swaping\t" << a << "\tValue for b before swaping\t" << b << std::endl;
//    problem1::swap(a, b);
//    std::cout << "Value for a after swaping\t" << a << "\tValue for b after swaping\t" << b << std::endl;
    // test same signe function
    // all négatif
//    a = -1;
//    b = -1;
//    std::cout << "a : \t" << a << "\tb : \t" << b << "\t result : \t" << problem1::same_sign(a, b) << std::endl;
//    a = 1;
//    b = -1;
//    std::cout << "a : \t" << a << "\tb : \t" << b << "\t result : \t" << problem1::same_sign(a, b) << std::endl;
//    a = -1;
//    b = 1;
//    std::cout << "a : \t" << a << "\tb : \t" << b << "\t result : \t" << problem1::same_sign(a, b) << std::endl;
//    a = 1;
//    b = 1;
//    std::cout << "a : \t" << a << "\tb : \t" << b << "\t result : \t" << problem1::same_sign(a, b) << std::endl;
//    problem1::display_first();
    std::cout << "Type 0 or 1" << std::endl;
    std::cin >> a;
    problem1::display_first_second(a);
    return 0;
}
