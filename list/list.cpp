//
// Created by 杨海 on 2019-01-24.
//

#include "list.h"
#include <iostream>

using namespace std;

/**
 * 链表的创建
 * @tparam T
 */
template<class T>
void List<T>::createList() {

    int input;
    ListNode<T> *cur;
    cout << "请输入链表节点的值" << endl;
    cin >> input;
    if (List<T>::head == nullptr) {
        cur = new ListNode<T>(input, nullptr);
        head = cur;
        tail = cur;
        size++;
    } else if (input == 0) {
        cur = new ListNode<T>(input, nullptr);
        tail->next = cur;
        tail = cur;
        size++;
        cout << "链表构建完成" << endl;
        return;
    } else {
        cur = new ListNode<T>(input, nullptr);
        tail->next = cur;
        tail = cur;
        size++;
    }
}

/**
 * 链表的遍历
 * @tparam T
 */
template<class T>
void List<T>::iterateList() {

    ListNode<T> *temp = List<T>::head;
    while (temp != nullptr) {
        cout << temp->el << endl;
        temp = temp->next;
        cout << temp->el << endl;
    }
}

/**
 * 利用栈递归的对链表进行反转
 * @tparam T
 */
template<class T>
ListNode<T> *List<T>::revertListByStack(ListNode<T> *node) {

    ListNode<T> *temp = head;
    if (temp == nullptr) {
        return;
    } else {
        temp = revertListByStack();
        temp->next->next = temp;
        temp->next = nullptr;
        return temp;
    }
}

/**
 * 利用非递归思想转置链表
 * @tparam T
 */
template<class T>
void List<T>::revertListNoStack() {

    ListNode<T>* cur;
    ListNode<T>* pre;
    ListNode<T>* tail;
    ListNode<T>* temp;
    if (head == nullptr || tail == nullptr) {
        return;
    } else {
        while (tempv v) {

        }
    }
}