#include <iostream>
#include <cstdlib>

#include "problem5.h"


namespace problem5 {

double** matrix_alloc(const int & rows, const int & cols) {
    double** matrix = new double*[rows];

    for (int i = 0; i < rows; ++i)
        matrix[i] = new double[cols];

    return matrix;
}

void matrix_delete(double ** matrix, const int & rows) {
    for (int i = 0; i < rows; ++i)
        delete [] matrix[i];
    delete [] matrix;
}

void matrix_display(double ** matrix, const int & rows, const int & cols) {
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)  {
            std::cout << matrix [i] [j] << "\t";
        }
        std::cout << std::endl;
    }
}

void transpose(double ** A, double ** B, const int & N, const int & M) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            B[j][i] = A[i][j];
}

void matrix_fill_rand(double ** matrix, const int & rows, const int & cols) {
    std::srand (time(NULL));
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)  {
            matrix [i] [j] = std::rand() % 100;
        }
    }
}

double * matrix_2_array(double ** matrix, const int & rows, const int & cols) {
    double * array = new double[rows * cols];
    for (int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            array [i * rows + j] = matrix [i][j];

    return array;
}

void display_flat_matrix(double * array, const int & rows, const int & cols) {
    for (int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            std::cout << array [i * rows + j] << "\t";

    std::cout << std::endl;
}

int min(const int & a, const int & b) {
    if (a > b) return b;
    else return a;
}

double ** pascal_matrix(const int & n, int & m) {
    m = 2 * n + 1;
    double ** C = matrix_alloc((m), (m));

    for (int i = 0; i <= 2 * n; i++) {
        for (int j = 0; j <= min(i, 2 * n); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C;
}
}
