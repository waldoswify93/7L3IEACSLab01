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

int partition (int * arr, int low, int high) {
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot) {
         i++;    // increment index of smaller element
         problem3::swap(arr[i], arr[j]);
        }
    }
    problem3::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int * arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
}
