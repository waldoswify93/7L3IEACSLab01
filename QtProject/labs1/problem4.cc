#include "problem4.h"
#include "problem3.h"

namespace problem4 {
void bubbleSort(int * data, const int & siz){
    bool swapped = false;
    do{
        swapped = false;
        for (int i = 1; i < siz; i++){
            if (data[i -1] > data[i]) {
                problem3::swap(data[i -1], data[i]);
                swapped = true;
            }
        }
    }while(swapped);
}
}
