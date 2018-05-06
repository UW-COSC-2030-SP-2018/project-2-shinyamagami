// cosc2030proj02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;


int main(int argc, char *argv[]) {

	//quick sort
	vector<int> vec1 = { 8, 5, 6, 7, 1, 3, 4, 2 };
	int size = vec1.size();
	int first = vec1.front();
	int last = vec1.front();
	printVector(vec1);
	
	quickSort(vec1, 0, size - 1);
	cout << "Quciksorted ";
	printVector(vec1);
	
	//binarysearch
	int result = binarySearch(vec1, 0, size - 1, 7);

	if (result == -1) {
		cout << "The number doesn't exist in the vector." << endl;
	}
	else {
		cout << "The number exists at index " << result << endl;
	}
	cout << "----------------" << endl << endl;


	//merge sort
	vector<int> vec2 = { 2, 3, 8, 4, 1, 6, 5, 7, 9 };
	size = vec2.size();
	printVector(vec2);

	mergeSort(vec2, 0, size - 1);
	cout << "Mergesorted " << endl;
	printVector(vec2);

	
	return 0;
}

