#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "InsertionSorter.h"

using namespace std;

vector<int> *buildVector();

int main(int argc, char** argv) {
    InsertionSorter *sorter = new InsertionSorter();

    vector<int> *unsrtd = buildVector();

    vector<int> *srtd = sorter->insertionSort(unsrtd);

    delete unsrtd;
    delete sorter;
    return 0;
}

vector<int> *buildVector() {
   srand(time(NULL)); 

   vector<int> *unsrtd = new vector<int>();

   for (int i = 0; i < 20; i++) {
       int val = rand() % 20;
       unsrtd->push_back(val);
   }

   return unsrtd;
}
