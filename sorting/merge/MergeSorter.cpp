#include <iostream>
#include <vector>
#include "MergeSorter.h"

using namespace std;

MergeSorter::MergeSorter() {

}

void MergeSorter::merge(int *array, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    vector<int> *v1 = new vector<int>(n1);
    vector<int> *v2 = new vector<int>(n2);

    int i;
    int j;

    for (i = start; i <= mid; i++) {
        v1->push_back(array[i]);
    }

    for (j = mid + 1; j <= end; j++) {
        v2->push_back(array[j]);
    }

    i = start;
    j = mid + 1;

    for (int k = start; k < end; k++) {
        if (v1->at(i) < v2->at(j)) {
            array[k] = v1->at(i);
            i++;
        } else {
            array[k] = v2->at(j);
            j++;
        }
    }
}

void MergeSorter::mergeSort(int *array, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        // Merge Sort left half of the array
        this->mergeSort(array, start, mid);
        // Merge Sort right half of the array
        this->mergeSort(array, mid + 1, end);
        this->merge(array, start, mid, end);
    }
}

void MergeSorter::printArray(int *array) {
    int i = 0;

    while (array[i]) {
        cout << array[i++] << endl;
    }
}
