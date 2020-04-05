#include "problem3.h"

namespace problem3 {


void swap(int * a, int * b) {
    int temp = * a;
    * a = * b;
    * b = temp;
}

void swap(int & a, int & b) {
    int temp =  a;
    a = b;
    b = temp;
}

}
