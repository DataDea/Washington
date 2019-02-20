//
// Created by 杨海 on 2019-02-19.
//

#include <iostream>
#include "element.h"

using namespace std;

template<class T>
void swap(Element<T> *t1, Element<T> *t2) {
    Element<T> *temp ;
    temp->el = t1->el;
    t1->el = t2->el;
    t2->el = temp->el;
    return;
}

template <class T>
void bubbleSort() {

}

