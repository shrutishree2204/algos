#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "MergeSorter.h"
#include "VectorGenerator.h"

using namespace std;

int main(int argc, char** argv) {
    MergeSorter *ms = new MergeSorter();
	VectorGenerator *vg = new VectorGenerator();

	vector<int>* vect = vg->generateVector();

	cout << "Printing unsorted values." << endl;

	ms->printVector(vect);

    ms->mergeSort(vect);

	cout << "\n\nPrinting sorted values." << endl;
    ms->printVector(vect);

    delete ms;
	delete vg;
    
    return 0;
}
