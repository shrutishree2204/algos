#include <iostream>
#include <vector>
#include "MergeSorter.h"

using namespace std;

MergeSorter::MergeSorter() {

}

void MergeSorter::mergeSort(vector<int>* vect) {
	this->mergeSort(vect, 0, vect->size() -1);
}

void MergeSorter::merge(vector<int>* vect, int start, int mid, int end) {
	int leftLen =  mid - start + 1;
	int rightLen = end - mid;

	vector<int>* left = new vector<int>(leftLen);
	vector<int>* right = new vector<int>(rightLen);

	int i;
	int j;

	for (i = 0; i < leftLen; i++) {
		left->at(i) = vect->at(start + i);
	}

	for (j = 0; j < rightLen; j++) {
		right->at(j) = vect->at(mid + j + 1);
	}

	i = 0;
	j = 0;

	for (int k = start; k <= end; k++) {
		if (j == rightLen || (i < leftLen && left->at(i) < right->at(j))) {
			vect->at(k) = left->at(i);
			i++;
		} else {
			vect->at(k) = right->at(j);
			j++;
		}
	}

	delete left;
	delete right;
}

void MergeSorter::mergeSort(vector<int>* vect, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        // Merge Sort left half of the array
        this->mergeSort(vect, start, mid);
        // Merge Sort right half of the array
        this->mergeSort(vect, mid + 1, end);
        this->merge(vect, start, mid, end);
    }
}

void MergeSorter::printVector(vector<int>* vect) {
	cout << "[";
	for (int i = 0; i < vect->size(); i++) {
		cout << vect->at(i);

		if (i != vect->size() - 1) {
			cout << ", ";
		}

		if (i > 0 && i % 10 == 0) {
			cout << endl;
		}
	}

	cout << "]" << endl;
}
