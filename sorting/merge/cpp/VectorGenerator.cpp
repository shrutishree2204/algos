#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "VectorGenerator.h"

using namespace std;

VectorGenerator::VectorGenerator() {

}

vector<int>* VectorGenerator::generateVector() {
	int size;

	cout << "Enter the number of values to generate: ";
	cin >> size;

	vector<int>* vect = new vector<int>();

	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		vect->push_back(rand() % size);
	}

	return vect;
}
