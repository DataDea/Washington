//
// Created by 杨海 on 2019-01-22.
//
#include <iostream>
using namespace std;
#ifndef STRUCTCPP_THREADTREE_H
#define STRUCTCPP_THREADTREE_H
template <class T>
class threadTreeNode{
public:
    T value;
    threadTreeNode *r, *l;
    unsigned rflag = 0;
    unsigned lflag = 0;
    //构造方法
    threadTreeNode(const T& e, threadTreeNode* left, threadTreeNode* right) {
        value = e;
        r = right;
        l = left;
        lflag = 0;
        rflag = 0;
    }
};

template <class T>
class ThreadTree{
    //根结点
    threadTreeNode<T> root;
    //前驱节点
    threadTreeNode<T> pre;

public:
    //创建线索二叉树
    void createThreadTree();
    //遍历线索二叉树
    void iterate();
};


#endif //STRUCTCPP_THREADTREE_H
