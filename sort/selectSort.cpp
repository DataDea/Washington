//
// Created by 杨海 on 2019-02-19.
//

#include "element.h"
#include <iostream>

using namespace std;

template<class T>
void swap(Element<T> *t1, Element<T> *t2) {
    Element<T> *temp ;
    temp->el = t1->el;
    t1->el = t2->el;
    t2->el = temp->el;
    return;
}

template<class T>
void selection(Element<T> element[], int n) {

    for (int i = 0, j, least; i < n - 1; i++) {
        for (j = i + 1, least = i; j < n; j++) {
            //找最小的元素
            if (element[j].el < element[least].el) {
                least = j;
            }
        }
        //交换位置
        swap(&element[least], &element[i]);
    }
    //输出结果
    for (int j = 0; j < 10; j++) {
        cout << element[j].el;
    }
}

void testSelection() {

    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    selection(elements, 10);
}