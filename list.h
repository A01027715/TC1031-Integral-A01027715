#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <string>
#include <sstream>
#include <vector>
#include "Vuelos.h"

template <class T> class List;
template <class T> class ListIterator;

using namespace std;

template <class T>
class Link {
private:
	Link(T val) : value(val), next(nullptr) {};

	T	    value;
	Link<T> *next;

	friend class List<T>;
	friend class ListIterator<T>;
};

template <class T>
class List {
public:
	List();

	void     insertion(T);
	vector<T> search(string);
	string   toString() const;

private:
	Link<T>  *head;
	int 	 size;

	friend class ListIterator<T>;
};

template <class T>
List<T>::List() : head(0), size(0) {}

template <class T>
void List<T>::insertion(T valor) {
	Link<T>* newVal = new Link<T>(valor);

    if (head == nullptr) {
        head = newVal;
    }

	else {
        Link<T>* curr = head;
        while (curr -> next != nullptr) {
            curr = curr -> next;
        }
        curr -> next = newVal;
    }
}

template <class T>
vector<T> List<T>::search(string valor) {
	Link<T> *curr = head;
	int index = 0;
	string Lec;
	T Lec1;
    vector<T> R1;


	while (curr) {
		Lec1= curr -> value;
		Lec= Lec1.get_Destino();
		if (Lec == valor) {
			R1.push_back(Lec1);
		}

		curr = curr -> next;
		index++;
	}
	return R1;
}
#endif