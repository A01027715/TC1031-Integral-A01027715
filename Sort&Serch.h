/*
 * Sort&Serch.h
 *
 *  Created on: 18/09/2022
 *      Author: Ulises Orlando Carrizalez Lerín
 */

#ifndef SORTS_H_
#define SORTS_H_

#include <vector>
#include <list>

template <class T>
class Sorts {
private:
	void swap(std::vector<T>&, int, int);
	void copyArray(std::vector<T>&, std::vector<T>&, int, int);
	void mergeArray(std::vector<T>&, std::vector<T>&, int, int, int);
	void mergeSplit(std::vector<T>&, std::vector<T>&, int, int);
    int bs_aux(std::vector<string> v, int min, int max, string val);
public:
	void ordenaMerge(std::vector<T>&);
	T busqBinaria(std::vector<string> Des, string DesF);
};

template <class T>
void Sorts<T>::swap(std::vector<T> &v, int i, int j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

template <class T>
void Sorts<T>::copyArray(std::vector<T> &A, std::vector<T> &B, int low, int high) {
	for (int i = low; i <= high; i++) {
		A[i] = B[i];
	}
}

template <class T>
void Sorts<T>::mergeArray(std::vector<T> &A, std::vector<T> &B, int low, int mid, int high) {
	int i, j, k;

	i = low;
	j = mid + 1;
	k = low;

	while (i <= mid &&j <= high) {
		if (A[i] < A[j]) {
			B[k] = A[i];
			i++;
		} else {
			B[k] = A[j];
			j++;
		}
		k++;
	}
	if (i > mid) {
		for (; j <= high; j++) {
			B[k++] = A[j];
		}
	} else {
		for (; i <= mid; i++) {
			B[k++] = A[i];
		}
	}
}

template <class T>
void Sorts<T>::mergeSplit(std::vector<T> &A, std::vector<T> &B, int low, int high) {
	int mid;

	if ( (high - low) < 1 ) {
		return;
	}
	mid = (high + low) / 2;
	mergeSplit(A, B, low, mid);
	mergeSplit(A, B, mid + 1, high);
	mergeArray(A, B, low, mid, high);
	copyArray(A, B, low, high);
}

template <class T>
void Sorts<T>::ordenaMerge(std::vector<T> &v) {
	std::vector<T> tmp(v.size());

	mergeSplit(v, tmp, 0, v.size() - 1);

}

template <class T>
int Sorts<T>:: bs_aux(std::vector<string> v, int min, int max, string val) {
	int mid;
	if (min <= max) {
		mid = (min + max) / 2;
		if (val == v[mid]) {
			return mid;
		} else if (val < v[mid]) {
			return bs_aux(v, min, mid - 1, val);
		} else if (val > v[mid]) {
			return bs_aux(v, mid + 1, max, val);
		}
	}
	if (v[min]==val){return min;}
	else return -1;
}

template <class T>
T Sorts<T>::busqBinaria(std::vector<string> Des, string DesF) {
	return bs_aux(Des, 0, Des.size() - 1, DesF);
}

#endif 
