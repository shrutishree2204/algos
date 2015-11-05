// InsertionSorter.h

#ifndef __INSERTION_SORTER_H
#define __INSERTION_SORTER_H

#include <iostream>
#include <vector>

using namespace std;

class InsertionSorter {
    public:
        InsertionSorter();
        vector<int>* insertionSort(vector<int>* unsrtd);
        void printVector(vector<int>* values);

    protected:

    private:
        vector<int>* srtd;
};

#endif /* __INSERTION_SORTER_H */
