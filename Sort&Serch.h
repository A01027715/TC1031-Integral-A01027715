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
#include "Vuelos.h"

using namespace std;

template <class T>
class Sorts {
private:
	std::vector<T> swap(std::vector<T>, int, int);
	void copyArray(std::vector<T>&, std::vector<T>&, int, int);
public:
	string arrayToString(const vector<T> v);
	std::vector<T> ordenaBurbuja(std::vector<T>, int);
	std::vector<T> busqBinaria(std::vector<T> Des, string DesF);
	int cont(std::vector<T> Des) {return Des.size();};
};

template <class T>
string Sorts<T> :: arrayToString(const vector<T> v) {
	stringstream aux;

	aux << "[" << v[0];
	for (int i = 1; i < v.size(); i++) {
		aux << ", " << v[i];
	}
	aux << "]";
	return aux.str();
}

template <class T>
std::vector<T> Sorts<T>::swap(std::vector<T> v, int i, int j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
	return v;
}

template <class T>
std::vector<T> Sorts<T>::ordenaBurbuja(std::vector<T> v, int n) {
	Vuelo MX;
	for (int i = v.size()-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v[j].get_HoraN() > v[j + 1].get_HoraN() && n == 1) {
				v= swap(v, j, j + 1);
			}
			else if (v[j].get_AerolineaN() > v[j + 1].get_AerolineaN() && n == 2) {
				v= swap(v, j, j + 1);
			}
		}
	}
	return v;
}

template <class T>
std::vector<T> Sorts<T>::busqBinaria(std::vector<T> Des, string DesF) {
	string Mex;
	int L= Des.size();
    std::vector<Vuelo> vec;

    for (int i = 0; i < L; i++){
		Mex= Des[i].get_Destino();
		if (Mex == DesF){
			vec.push_back(Des[i]);
		}
    }
	return vec;
}

#endif 