#include <iostream>
#include <iomanip>
#include <vector>
#include "InsertionSorter.h"

using namespace std;

InsertionSorter::InsertionSorter() {
    srtd = new vector<int>();
}

vector<int>* InsertionSorter::insertionSort(vector<int>* unsrtd) {
    if (unsrtd == NULL) {
        cout << "Parameter is null." << endl;
        return NULL;
    }

    srtd = unsrtd;

    // Start at index 1 so there is something
    // behind to compare to.
    for (int j = 1; j < srtd->size(); j++) {
        cout << "Iteration #" << j << endl;
        int key = srtd->at(j);
        cout << "Key selected from [" << j << "] with value: " << key << endl;
        this->printVector(srtd);

        int i = j - 1;

        /* 
         * While the value of i is greater than
         * the value of key, shift all the values
         * over to the right by one.
         */
        while (i >= 0 && srtd->at(i) > key) {
            // Shift value to the right
            cout << "Moving value: " << srtd->at(i);
            cout << " at [" << i << "]";
            cout << " to [" << (i + 1) << "]" << endl;
            srtd->at(i + 1) = srtd->at(i); 

            // Move the index left
            i--;
        }

        // Assign the value where it belongs
        srtd->at(i+1) = key;

        cout << "\n\n\n";
    }

    this->printVector(srtd);

    return srtd;
}

void InsertionSorter::printVector(vector<int>* values) {
    cout << "{ " << values->at(0) << ", ";

    int size = values->size();

    int width = 0;
    int count = size;

    while (count > 10) {
        width++;
        count /= 10;
    }

    cout << setw(width);

    for (int i = 1; i < size; i++) {
        if (i % 20 == 0) {
            cout << endl;
        }

        cout << values->at(i);

        if (i != size - 1) {
            cout << ", ";
        }
    }

    cout << " }" << endl;
}
