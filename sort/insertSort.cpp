//
// Created by 杨海 on 2019-01-25.
//

#include <iostream>
#include <regex>
#include "element.h"

using namespace std;

template<class T>
void insertSort(Element<T> element[], int n) {
    Element<T> temp;
    int j;
    for (int i = 1; i < n; i++) {
        temp = element[i];
        for (j = i - 1; j >= 0 && temp.el < element[j].el; j--) {
            //移位
            element[j] = element[j - 1];
        }
        //记录最终的插入位置
        element[j] = temp;
    }

    //输出元素的值
    for (int j = 0; j < 10; j++) {
        cout << element[j].el;
    }
}

void testInsert() {

    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    insertSort(elements, 10);
}