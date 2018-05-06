#pragma once

#ifndef MEMORY_H
#define MEMORY_H
using namespace std;


void printVector(vector<int> &vec){
	cout << "Output of vector" << endl;
	for (int val : vec) {
		cout << val << " ";
	}
	cout << endl
	<< "----------------" << endl;
}

int partition(vector<int> &vec, int l, int r) {
	int pivot = l;
	int i = pivot + 1;
	int t;

	for (int e = i; e <= r; e++) {
		if (vec.at(e) < vec.at(pivot)) {

			t = vec.at(i);
			vec.at(i) = vec.at(e);
			vec.at(e) = t;
			i++;
		}
	}

	t = vec.at(i - 1);
	vec.at(i - 1) = vec.at(pivot);
	vec.at(pivot) = t;

	return (i - 1);
}

vector<int> quickSort(vector<int> &vec, int l, int r) {
	int index;
	if (l < r) {
		index = partition(vec, l, r);
		quickSort(vec, l, index - 1);
		quickSort(vec, index + 1, r);
	}
	return vec;
}


int binarySearch(vector<int> &vec, int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - 1) / 2;

		if (vec.at(mid) == x) {
			return mid;
		}

		if (vec.at(mid) > x) {
			return binarySearch(vec, l, mid - 1, x);
		}

		return binarySearch(vec, mid + 1, r, x);
	}

	return -1;
}


// not figure this out at all
vector<int> merge(vector<int> &vec, int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;

	vector<int> left(n1, 0), right(n2, 0);

	for (int i = 0; i < n1; i++) {
		
		left.at(i) = vec.at(l + i);
	}
	for (int j = 0; j < n2; j++) {
		right.at(j) = vec.at(m + 1 + j);
	}

	int i = 0;
	int j = 0;
	int k = l;
	while (i < n1 && j << n2) {
		if (left.at(i) <= right.at(j)) {
			vec.at(k) = left.at(i);
			i++;
		} else {
			vec.at(k) = right.at(j);
			j++;
		}
		k++;
	}

	while (i < n1) {
		vec.at(k) = left.at(i);
		i++;
		k++;
	}

	while (j < n2) {
		vec.at(k) = right.at(j);
		j++;
		k++;
	}

	return vec;
}

vector<int> mergeSort(vector<int> &vec, int l, int r) {
	


}


#endif