//
// Created by 杨海 on 2019-02-24.
//

#include <iostream>
#include "element.h"

using namespace std;

//辅助交换函数
template<class T>
void Swap(Element<T> *a, Element<T> *b) {
    Element<T> *temp = a;
    a->el = b->el;
    b->el = temp->el;
}

//堆排序的核心是建堆,传入参数为数组，根节点位置，数组长度
template<class T>
void heapBuild(Element<T> a[], int root, int length) {
    int lChild = root * 2 + 1;  //根节点的左子结点下标
    if (lChild < length)        //左子结点下标不能超出数组的长度
    {
        int flag = lChild;      //flag保存左右节点中最大值的下标
        int rChild = lChild + 1;//根节点的右子结点下标
        if (rChild < length)    //右子结点下标不能超出数组的长度(如果有的话)
        {
            if (a[rChild].el > a[flag].el)//找出左右子结点中的最大值
            {
                flag = rChild;
            }
        }
        if (a[root].el < a[flag].el) {
            //交换父结点和比父结点大的最大子节点
            Swap(&a[root], &a[flag]);
            //从此次最大子节点的那个位置开始递归建堆
            heapBuild(a, flag, length);
        }
    }
}

/**
 * 堆有两种 大顶堆/小顶堆 都只能很明确堆顶的元素，不能说明初对堆顶外的其他元素，每次都需要从新建堆
 */
template<class T>
void heapSort(Element<T> a[], int len) {
    for (int i = len / 2; i >= 0; --i)//从最后一个非叶子节点的父结点开始建堆
    {
        Heap_build(a, i, len);
    }

    for (int j = len - 1; j > 0; --j)//j表示数组此时的长度，因为len长度已经建过了，从len-1开始
    {
        Swap(a[0], a[j]);//交换首尾元素,将最大值交换到数组的最后位置保存
        Heap_build(a, 0, j);//去除最后位置的元素重新建堆，此处j表示数组的长度，最后一个位置下标变为len-2
    }

    //输出结果
    for (int j = 0; j < 10; j++) {
        cout << a[j].el << endl;
    }

}

template<class T>
void testHeapSort() {
    Element<int> elements[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        cout << "请输入[0-9]或者[0-9]拼接的值" << endl;
        cin >> temp;
        elements[i].el = temp;
    }
    heapSort(elements, 10);
}