#include <cmath>

#include "problem2.h"


namespace problem2 {

void sin_ln(int idx_start, int idx_end, double * data) {
    for (int i = idx_start ; i <= idx_end ; i++) {
        data[i] = std::sin(i) + std::log(i);
    }
}
}
