// MergeSorter.h

#ifndef __MERGE_SORTER_H
#define __MERGE_SORTER_H

class MergeSorter {
    public:
        MergeSorter();
        void merge(int *array, int start, int mid, int end);
        void mergeSort(int *array, int start, int end);
        void printArray(int *array);

    protected:

    private:
};

#endif /* __MERGE_SORTER_H */
