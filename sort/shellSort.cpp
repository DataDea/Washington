//
// Created by 杨海 on 2019-02-24.
//

#include <iostream>
#include "element.h"

using namespace std;

template<class T>
void shellSort(Element<T> a[], int n) {
    int i, j, k, group;
    /**
     * 分组增量的选择一般依赖于经验值
     * 通用的公式: hi = 3*hi + 1
     */
    for (group = n / 2; group > 0; group /= 2) {
        for (i = 0; i < group; ++i) {
            for (j = i + group; j < n; j += group) {
                //对每个分组进行插入排序
                if (a[j - group].el > a[j].el) {
                    int temp = a[j].el;
                    k = j - group;
                    while (k >= 0 && a[k].el > temp) {
                        a[k + group].el = a[k].el;
                        k -= group;
                    }
                    a[k].el = temp;
                }
            }
        }
    }

    //输出结果
    for (int j = 0; j < 10; j++) {
        cout << a[j].el << endl;
    }
}

void testShellSort() {

    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    shellSort(elements, 10);
}