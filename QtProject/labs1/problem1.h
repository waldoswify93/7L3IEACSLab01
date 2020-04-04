#ifndef PROBLEM1_H
#define PROBLEM1_H

enum e_o_status {
    EVEN,
    ODD,
};

namespace problem1 {
void swap(int &, int &);
bool same_sign(const int &, const int &);
int even_odd(const int & );
void display_first();
void display_first_second(const int &);
}
#endif // PROBLEM1_H
