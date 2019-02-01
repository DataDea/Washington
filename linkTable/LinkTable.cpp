//
// Created by 杨海 on 2019-01-24.
//

#include <iostream>
#include "linklist.h"

using namespace std;

/**
 * 链表的创建
 * @tparam T
 */
template<class T>
void LinkList<T>::generateList() {

    int input;
    ListNode<T> *cur;
    cout << "请输入链表节点的值" << endl;
    cin >> input;
    if (head == nullptr) {
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
void LinkList<T>::iterateList() {

    ListNode<T> *temp = LinkList<T>::head;
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
ListNode<T> *LinkList<T>::revertListByStack(ListNode<T> *node) {

    ListNode<T> *temp = head;
    if (temp == nullptr) {
        return;
    } else {
        temp = revertListByStack(temp);
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
ListNode<T> *LinkList<T>::revertListNoStack(ListNode<T> *head) {

    if (head == nullptr) {
        return;
    } else {
        ListNode<T> *pre = head;
        ListNode<T> *cur = head->next;
        ListNode<T> *temp = head->next->next;
        while (cur != nullptr) {
            temp = cur->next; //temp作为中间节点
            cur->next = pre;  //当前节点指向头节点
            pre = cur;        //指针后移
            cur = temp;       //指针后移
        }
        head->next = nullptr; //将最后的节点的指针设置为空
    }

}