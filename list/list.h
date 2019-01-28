//
// Created by 杨海 on 2019-01-24.
//

#ifndef STRUCTCPP_LIST_H
#define STRUCTCPP_LIST_H

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
class List {

public:
    ListNode<T> *head;
    ListNode<T> *tail;
    int size;

public:
    void createList();

    ListNode<T> *revertListByStack(ListNode<T> *tmp);

    void revertListNoStack();

    void iterateList();

};

#endif //STRUCTCPP_LIST_H
