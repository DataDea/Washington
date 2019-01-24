//
// Created by 杨海 on 2019-01-22.
//
#ifndef STRUCTCPP_THREADTREE_H
#define STRUCTCPP_THREADTREE_H
/**
 * rflag,lflag的值代表的意义 1:左/右子树 0:前/后趋节点
 */
template<class T>
class threadTreeNode {
public:
    T value;
    threadTreeNode *r, *l;
    unsigned rflag = 0;
    unsigned lflag = 0;

    //构造方法
    threadTreeNode(const T &e, threadTreeNode *left, threadTreeNode *right) {
        value = e;
        r = right;
        l = left;
        lflag = 0;
        rflag = 0;
    }

    threadTreeNode() {
        value = nullptr;
        r = nullptr;
        l = nullptr;
        lflag = 0;
        rflag = 0;
    }
};

template<class T>
class ThreadTree {

    //根结点
    threadTreeNode<T> root;

    //前驱节点
    threadTreeNode<T> pre;

public:
    //创建二叉树
    void createBinTree();

    //遍历线索二叉树
    void iterater();

    //线索话二叉树
    void threadBinTree(threadTreeNode<T> *cur, threadTreeNode<T> *&pre);

    //获取前驱节点
    threadTreeNode<T>* getPreThreadNode(threadTreeNode<T>* p);

    //获取后驱节点
    threadTreeNode<T>* getPostThreadNode(threadTreeNode<T>* p);
};


#endif //STRUCTCPP_THREADTREE_H
