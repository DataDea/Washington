//
// Created by 杨海 on 2019-01-10.
//

#include "binTree.h"
#include <queue>

/**
 * 二叉树的查找
 * @tparam T 返回的节点的类型，类型由模板决定
 * @param p 二叉树的节点
 * @param el 查找的值
 * @return
 */
template<class T>
T *BinTree<T>::search(BinTreeNode<T> *p, const T &el) const {
    while (p != 0) {
        if (el == p->el) {
            return &p->el;
        } else if (el < p->el) {
            p = p->right;
        } else {
            p = p->left;
        }
    }
    return 0;
}

/**
 * 递归前序遍历二叉树
 * @tparam T  节点的类型，类型由模板决定
 * @param p 二叉树的根结点
 */
template<class T>
void BinTree<T>::preorder(BinTreeNode<T> *p) {
    if (p != 0) {
        visit(p);
        if (p->left != 0) {
            preorder(p->left);
        }
        if (p->right) {
            preorder(p->right);
        }
    }
}

/**
 * 递归中序遍历二叉树
 * @tparam T  节点的类型，类型由模板决定
 * @param p 二叉树的根结点
 */
template<class T>
void BinTree<T>::inorder(BinTreeNode<T> *p) {
    if (p != 0) {
        if (p->left != 0) {
            inorder(p->left);
        }
        visit(p);
        if (p->right != 0) {
            inorder(p->right);
        }
    }
}

/**
 * 递归后序遍历二叉树
 * @tparam T  节点的类型，类型由模板决定
 * @param p 二叉树的根结点
 */
template<class T>
void BinTree<T>::postorder(BinTreeNode<T> *p) {
    if (p != 0) {
        if (p->left != 0) {
            postorder(p->left);
        }
        if (p->right != 0) {
            postorder(p->right);
        }
        visit(p);
    }
}

/**
 * 利用队列实现广度遍历二叉树
 * @tparam T 节点的类型，类型由模板决定
 */
template<class T>
void BinTree<T>::breadthFirst() {
    Queue<BinTreeNode<T> *> queue;
    BinTreeNode<T> *p = root;
    if (p != 0) {
        queue.enqueue(p);
        while (!queue.empty()) {
            p = queue.dequeue();
            visit(p);
            if (p->left != 0) {
                queue.enqueue(p->left);
            }
            if (p->right != 0) {
                queue.enqueue(p->right);
            }
        }
    }
}

/**
 * 利用栈实现二叉树的非递归前序遍历
 * @tparam T 节点的类型，类型由模板决定
 */
template<class T>
void BinTree<T>::iterativePreorder() {
    Stack<BinTreeNode<T> *> stack;
    BinTreeNode<T> *p = root;
    if (p != 0) {
        stack.push(p);
        while (!stack.empty()) {
            p = stack.pop();
            visit(p);
            if (p->right != 0) {
                stack.push(p->right);
            }
            if (p->left != 0) {
                stack.push(p->left);
            }
        }
    }
}

/**
 * 非递归的后序遍历
 * @tparam T 节点的类型，类型由模板决定
 */
template<class T>
void BinTree<T>::iterativePostorder() {
    Stack<BinTreeNode<T> *> stack;
    BinTreeNode<T> *p = root, *q = root;
    while (p != 0) {
        for (; p->left != 0; p = p->left) {
            stack.push(p);
        }
        while (p->right == 0 || p->right == q) {
            visit(p);
            q = p;
            if (stack.empty()) {
                return;
            }
            p = stack.push();
        }
        stack.push(p);
        p = p->right;
    }
}

/**
 * 非递归的后序遍历
 * @tparam T 节点的类型，类型由模板决定
 */
template<class T>
void BinTree<T>::iterativeInorder() {
    Stack<BinTreeNode<T> *> stack;
    BinTreeNode<T> *p = root;
    while (p != 0) {
        while (p != 0) {
            if (p->right) {
                stack.push(p->right);
            }
            stack.push(p->left);
            p = p->left;
        }
        p = stack.pop();
        while (!stack.empty() && p->right == 0) {
            visit(p);
            p = stack.pop();
        }
        visit(p);
        if (!stack.empty()) {
            p = stack.pop();
        } else {
            p = 0;
        }
    }
}

template <class T>
void BinTree<T>::insert() {


}