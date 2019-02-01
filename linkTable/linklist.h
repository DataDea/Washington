//
// Created by 杨海 on 2019-01-24.
//

#ifndef STRUCTCPP_LIST_H
#define STRUCTCPP_LIST_H

#include <iostream>

using namespace std;

template<class T>
class ListNode {
public:
    T el;
    ListNode *next;

public:
    ListNode(const T &v, const ListNode *&ptr) {
        el = v;
        next = ptr;
    }
};

template<class T>
class LinkList {

public:
    ListNode<T> *head;
    ListNode<T> *tail;
    int size;

public:
    void generateList();

    ListNode<T> *revertListByStack(ListNode<T> *tmp);

    ListNode<T> *revertListNoStack(ListNode<T> *head);

    void iterateList();

};

#endif //STRUCTCPP_LIST_H
