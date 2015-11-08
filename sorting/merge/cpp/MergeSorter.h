// MergeSorter.h

#ifndef __MERGE_SORTER_H
#define __MERGE_SORTER_H

#include <iostream>
#include <vector>

using namespace std;

class MergeSorter {
    public:
        MergeSorter();
		void mergeSort(vector<int>* vect);
        void printVector(vector<int>* vect);

    protected:

    private:
        void mergeSort(vector<int>* vect, int start, int end);
        void merge(vector<int>* vect, int start, int mid, int end);
};

#endif /* __MERGE_SORTER_H */
