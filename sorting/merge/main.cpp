#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MergeSorter.h"

using namespace std;

int *buildArray();

int main(int argc, char** argv) {
    MergeSorter *ms = new MergeSorter();

    int *unsrtd = buildArray();

    cout << "\nPrinting unsorted array:" << endl;
    ms->printArray(unsrtd);

    ms->mergeSort(unsrtd, 0, 99);

    //cout << "\nPrinting sorted array:" << endl;
    //ms->printArray(unsrtd);

    delete ms;
    
    return 0;
}

int *buildArray() {
    srand(time(NULL));

    int *unsrtd = new int[100];

    for (int i = 0; i < 100; i++) {
        int val = rand() % 100;
        unsrtd[i] = val;
    }

    return unsrtd;
}
