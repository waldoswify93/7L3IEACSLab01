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

}
