//
// Created by 杨海 on 2019-02-22.
//

#include <iostream>
#include "element.h"

using namespace std;

template<class T>
void quickSort(Element<T> *element, int start, int end) {
    if (start < end) {
        Element<T> store = element[start];
        int i = start, j = end;
        while (i < j) {
            while (i < j && element[j].el >= store.el) {
                //继续找
                j--;
            }
            if (i < j) {
                element[i] = element[j];
            }
            while (i < j && element[i].el < store.el) {
                i++;
            }
            if (i < j) {
                element[j] = element[i];
            }
        }
        //移位中介
        element[i] = store;
        quickSort(element, i + 1, end);
        quickSort(element, start, i - 1);
    }
}

void testQuickSort() {

    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    quickSort(elements, 0, 9);
}
