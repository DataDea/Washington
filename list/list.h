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
    ListNode *head;

public:
    void createList();
    void iterateList();
    void revertList();

};

#endif //STRUCTCPP_LIST_H
