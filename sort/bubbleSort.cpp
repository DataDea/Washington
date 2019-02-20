//
// Created by 杨海 on 2019-02-19.
//

#include <iostream>
#include "element.h"

using namespace std;

template<class T>
void swap(Element<T> *t1, Element<T> *t2) {
    Element<T> *temp;
    temp->el = t1->el;
    t1->el = t2->el;
    t2->el = temp->el;
    return;
}

/**
 * 冒泡排序类似于大树沉底的方式
 */
template<class T>
void bubbleSort(Element<T> element[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j++) {
            if (element[j].el < element[j - 1].el) {
                //这里类似于大树沉底的方法
                swap(&element[j], &element[j - 1]);
            }
        }
    }

    //输出结果
    for (int i = 0; i < n; i++) {
        cout << element[i].el << endl;
    }
}

void testBubble() {

    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    bubbleSort(elements, 10);
}
