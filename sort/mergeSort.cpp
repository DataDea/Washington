//
// Created by 杨海 on 2019-02-24.
//

#include <iostream>
#include "element.h"

using namespace std;

/**
 * 归并排序耗费的空间稍微多一些，优化的方案是改进连个数组合并的方式
 */
// 合并数组，排好序，然后在拷贝到原来的数组array
template<class T>
void MergeArray(Element<T> array[], int start, int end, int mid, Element<T> temp[]) {
    /**
     * 主要功能是合并两个数组的内容
     */
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end) {
        if (array[i].el < array[j].el) {
            temp[k++].el = array[i++].el;
        } else {
            temp[k++].el = array[j++].el;
        }
    }
    /**
     * 将两个子数组剩余的部分加入中间数组中
     */
    while (i <= mid) {
        temp[k++].el = array[i++].el;
    }
    while (j <= end) {
        temp[k++].el = array[j++].el;
    }
    /**
     * 将temp数组的内容赋值给原数组
     */
    for (int i = 0; i < k; i++) {
        array[start + i].el = temp[i].el;
    }

}

//归并排序，将数组前半部分后半部分分成最小单元，然后在合并
template<class T>
void mergeSort(Element<T> array[], int start, int end, Element<T> temp[]) {
    if (start < end) {
        int mid = (start + end) / 2;
        MergeSort(array, start, mid, temp);
        MergeSort(array, mid + 1, end, temp);
        MergeArray(array, start, end, mid, temp);
    }

}

//输出排序的结果
template<class T>
void printArray(Element<T> array[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << array[i].el << endl;
    }
    cout << endl;
}

template<class T>
void testMergeSort() {

    Element<int> elements[10];
    Element<int> tempElements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    mergeSort(elements, 0, 9, tempElements);
    printArray(tempElements, 10);
}

