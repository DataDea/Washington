//
// Created by 杨海 on 2019-01-22.
//

#include <iostream>
#include "threadTree.h"

using namespace std;

/**
 * 创建二叉树 递归的方式创建二叉树 这种方式最为简单
 * @tparam T
 */
template<class T>
void ThreadTree<T>::createBinTree() {

    threadTreeNode<T> *p = nullptr;
    char input;
    cout << "请输入二叉树的节点的值" << endl;
    cin >> input;
    if (input == '.') {
        p = nullptr;
        cout << "结束当前的输入" << endl;
    } else {
        p = new threadTreeNode<T>;
        p->value = input;
        p->r = createBinTree();
        p->l = createBinTree();
    }
}

/**
 * 线索二叉树树遍历
 * @tparam T
 */
template<class T>
void ThreadTree<T>::iterater() {
    cout<<"中序遍历的结果为:"<<endl;
    threadTreeNode<T>* p = ThreadTree::root;

}

/**
 * 我们采用中序遍历二叉树访问每一个树结点的时候，我们只知道当前结点，如何知道前驱结点呢？
 * 我们能否考虑将刚刚访问的结点（pre）保存下来，每次访问树结点的时候，发现左孩子结点为NULL，
 * 就将其线索化！它的前驱结点是不是pre结点呢？！tree->lchild = pre；那个刚刚访问的结点 (pre)的右孩子结点 为NULL，
 * 那么将其线索化 pre 它的后继结点是不是当前结点呢？！pre->rchild = tree
 *
 * 线索话二叉树 中序遍历的方式
 * @tparam T
 */
template<class T>
void ThreadTree<T>::threadBinTree(threadTreeNode<T> *cur, threadTreeNode<T> *&pre) {
    if (cur == nullptr) {
        return;
    } else {
        //按照中序遍历的方式 先处理左子树
        threadBinTree(cur->l, pre);
        //在处理当前的节点
        if (cur->l == nullptr) {
            cur->lflag = 0;
            cur->l = pre;
        }
        if (cur->r == nullptr) {
            cur->r = 0;
        }
        //线索化pre节点
        if (pre->r) {
            pre->r = cur;
        }
        pre = cur;
        //最后处理右子树
        threadBinTree(cur->r, pre);
    }
}

/**
 * 获取当前节点的前驱节点
 * @tparam T 节点的值
 * @param p 当前的节点
 * @return  当前节点的前驱节点
 */
template<class T>
threadTreeNode<T> *ThreadTree<T>::getPreThreadNode(threadTreeNode<T> *p) {
    if (p == nullptr) {
        return nullptr;
    } else {
        if (p->lflag == 0) {
            return p->l;
        }
        threadTreeNode<T> *q = p->l;
        while (q->rflag == 0) {
            q = q->r;
        }
        return q;
    }
}

/**
 * 获取当前节点的后驱节点
 * @tparam T 节点的值
 * @param p 当前的节点
 * @return  当前节点的前驱节点
 */
template<class T>
threadTreeNode<T> *ThreadTree<T>::getPostThreadNode(threadTreeNode<T> *p) {
    if (p == nullptr) {
        return nullptr;
    } else {
        if (p->rflag == 0) {
            return p->r;
        }
        threadTreeNode<T>* q = p->r;
        while (q->lflag == 0) {
            q = q->l;
        }
        return q;
    }
}

