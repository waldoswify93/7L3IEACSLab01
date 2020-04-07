#include <iostream>
#include <string>
#include <chrono>

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
//    int a = 0;
//    int b = 0;
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
//    std::cout << "Type 0 or 1" << std::endl;
//    std::cin >> a;
//    problem1::display_first_second(a);

//    //---------------------------------
//    //  Problem 2
//    //---------------------------------
//    int start = 1;
//    int end = 10;
//    double * res_func = new double[end-start+1];
//    problem2::sin_ln(start, end, res_func);

//    for (int i = start; i <= end; i++)
//        std::cout << "Index\t" << i << "\tValue function\t" << res_func[i] << std::endl;

//    free(res_func);

//    //---------------------------------
//    //  Problem 3
//    //---------------------------------

//    int a = 14;
//    int b = 100;
//    std::cout << "Value for a before swaping\t" << a << "\tValue for b before swaping\t" << b << std::endl;
//    problem3::swap(&a, &b);
//    std::cout << "Value for a after swaping (pointer version) \t" << a << "\tValue for b after swaping\t" << b << std::endl;

//    std::cout << "Value for a before swaping\t" << a << "\tValue for b before swaping\t" << b << std::endl;
//    problem3::swap(a, b);
//    std::cout << "Value for a after swaping (reference version) \t" << a << "\tValue for b after swaping\t" << b << std::endl;

//    //---------------------------------
//    //  Problem 4
//    //---------------------------------

//    int data_bublecksort [] = {64, 34, 25, 12, 22, 11, 90};

//    int data_bublequick [] = {65, 54, 26, 91, 21, 12, 13};
//    int data_bublesort_siz = 7;

//    int * val = new int[data_bublesort_siz];
//    int * val_quick = new int[data_bublesort_siz];

//    std::cout << std::endl;
//    std::cout << "Avant tri bubblesort : " << std::endl;
//    std::cout << std::endl;
//    for(int i = 0; i < data_bublesort_siz; i++) {
//        val[i] = data_bublecksort[i];
//        std::cout << val[i] << std::endl;
//    }

//    auto t1 = std::chrono::high_resolution_clock::now();
//    problem4::bubbleSort(val, data_bublesort_siz);
//    auto t2 = std::chrono::high_resolution_clock::now();

//    auto durationbubble = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

//    std::cout << std::endl;
//    std::cout << "Après tri bubble sort : " << std::endl;
//    std::cout << std::endl;
//    for(int i = 0; i < data_bublesort_siz; i++) {
//        std::cout << val[i] << std::endl;
//    }

//    std::cout << std::endl;
//    std::cout << "Avant tri quicksort : " << std::endl;
//    std::cout << std::endl;
//    for(int i = 0; i < data_bublesort_siz; i++) {
//        val_quick[i] = data_bublequick[i];
//        std::cout << val_quick[i] << std::endl;
//    }

//    t1 = std::chrono::high_resolution_clock::now();
//    problem4::quickSort(val_quick, 0, data_bublesort_siz-1);
//    t2 = std::chrono::high_resolution_clock::now();

//    auto durationquick = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

//    std::cout << std::endl;
//    std::cout << "Après tri quicksort : " << std::endl;
//    std::cout << std::endl;
//    for(int i = 0; i < data_bublesort_siz; i++) {
//        std::cout << val_quick[i] << std::endl;
//    }

//    std::cout << std::endl << "Duration bubblesort : " << durationbubble << std::endl;
//    std::cout << std::endl << "Duration bubblesort : " << durationquick << std::endl;


//    free(val);
//    free(val_quick);

    //---------------------------------
    //  Problem 5
    //---------------------------------

    double ** A;
    double ** B;
    double ** C;

    double * flat_A_B;

    int n = 5;
    int m = 0;

    A = problem5::matrix_alloc(3, 2);
    B = problem5::matrix_alloc(2, 3);

    problem5::matrix_fill_rand(A, 3, 2);

    std::cout << std::endl;
    std::cout << "Display A" << std::endl;
    problem5::matrix_display(A, 3, 2);

    problem5::transpose(A, B, 3, 2);

    std::cout << std::endl;
    std::cout << "Display B" << std::endl;
    problem5::matrix_display(B, 2, 3);

    std::cout << std::endl;
    std::cout << "Transforme matrix A to flat array : " << std::endl;
    flat_A_B = problem5::matrix_2_array(A, 3, 2);
    problem5::display_flat_matrix(flat_A_B, 3, 2);



    C = problem5::pascal_matrix(n, m);
    std::cout << std::endl;
    std::cout << "Display Pascal matrix for order n = " << n << std::endl;
    problem5::matrix_display(C, m, m);

    problem5::matrix_delete(A, 3);
    problem5::matrix_delete(B, 2);
    free(flat_A_B);



    return 0;
}
