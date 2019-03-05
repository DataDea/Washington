//
// Created by 杨海 on 2019-01-09.
//
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

#ifndef STRUCTCPP_BINTREE_H
#define STRUCTCPP_BINTREE_H

template<class T>
class BinTreeNode {
public:
    T el;
    BinTreeNode<T> *left, *right;

    BinTreeNode() {
        left = right = 0;
    }

    BinTreeNode(const T &e, BinTreeNode<T> *l = 0, BinTreeNode<T> *r = 0) {
        el = e;
        left = l;
        right = r;
    }
};

template<class T>
class BinTree {
protected:
    BinTreeNode<T> root;

    void clear(BinTreeNode<T> *);

    T *search(BinTreeNode<T> *, const T &) const;

    void preorder(BinTreeNode<T> *);

    void inorder(BinTreeNode<T> *);

    void postorder(BinTreeNode<T> *);

    virtual void visit(BinTreeNode<T> *p) {
        cout << p->el << endl;
    }

public:
    BinTree() {
        root = 0;
    }

    ~BinTree() {
        clear();
    }

    void clear() {
        clear(root);
        root = 0;
    }

    bool isEmpty() {
        return root == 0;
    }

    void preorder() {
        preorder(root);
    }

    void inorder() {
        inorder(root);
    }

    void postorder() {
        postorder(root);
    }

    T *search(const T &el) const {
        return search(root);
    }

    void breadthFirst();

    void iterativePreorder();

    void iterativeInorder();

    void iterativePostorder();

    void MorrisInorder();

    void insert(const T& el);

    void deleteBymerging(BinTreeNode<T> *&);

    void findAndDeleteByMerging(BinTreeNode<T> *&);

    void delteByCopying(BinTreeNode<T> *&&);

    void balance(T *, int, int);

    void revertByQueueBinTree();

    void revertByStackBinTree(BinTreeNode<T>* node);

};

template<class T>
class Queue : public deque<T> {
public:
    T dequeue() {
        T tmp = queue<T>::front();
        queue<T>::pop();
        return tmp;
    }

    void enqueue(const T &el) {
        push(el);
    }
};

template<class T>
class Stack : public stack<T> {

};

#endif //STRUCTCPP_BINTREE_H
