#ifndef PROBLEM5_H
#define PROBLEM5_H


namespace problem5 {
void matrix_delete(double **, const int &);
double** matrix_alloc(const int &, const int &);
void matrix_display(double **, const int &, const int &);
void transpose(double **, double **, const int &, const int &);
void matrix_fill_rand(double **, const int &, const int &);
double * matrix_2_array(double **, const int &, const int &);
void display_flat_matrix(double *, const int &, const int &);
int min(const int &, const int &);
double ** pascal_matrix(const int &, int &);
}

#endif // PROBLEM5_H
