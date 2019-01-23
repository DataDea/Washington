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
 * 非递归的后序遍历 LRV
 * @tparam T 节点的类型，类型由模板决定
 *
 * 这个算法注意理解左右节点切换的条件和如果保存栈的记录结果
 */
template<class T>
void BinTree<T>::iterativePostorder() {
    Stack<BinTreeNode<T> *> stack;
    BinTreeNode<T> *p = root, *q = root;
    while (p != 0) {
        //去找最左边的节点并依次进入栈
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
        //保留根节点,切换到右节点
        stack.push(p);
        p = p->right;
    }
}

/**
 * 非递归的中序遍历 LVR
 * @tparam T 节点的类型，类型由模板决定
 */
template<class T>
void BinTree<T>::iterativeInorder() {
    Stack<BinTreeNode<T> *> stack;
    BinTreeNode<T> *p = root;
    while (p != 0) {
        //找左子树中最左边的节点，往栈中添加节点，如果节点有右节点时，需要先压到栈里
        while (p != 0) {
            if (p->right) {
                stack.push(p->right);
            }
            stack.push(p->left);
            p = p->left;
        }
        p = stack.pop();
        //只有右兄弟为NULL或者没有右兄弟的节点才能访问
        while (!stack.empty() && p->right == 0) {
            visit(p);
            //出栈
            p = stack.pop();
        }
        //访问父节点
        visit(p);
        if (!stack.empty()) {
            p = stack.pop();
        } else {
            p = 0;
        }
    }
}

/**
 * 二叉树的逆转
 * 层次遍历的方式
 *
 * @tparam T
 */
template<class T>
void BinTree<T>::revertByQueueBinTree() {
    /**
     * 利用队列实现转置
     */
    BinTreeNode<T> *p = root;
    BinTreeNode<T> *q = nullptr;
    BinTreeNode<T> *temp = nullptr;
    Queue<BinTreeNode<T> *> queue;
    queue.enqueue(p);
    while (!queue.empty()) {
        q = queue.dequeue();
        temp = q->left;
        q->left = q->right;
        q->right = temp;
        if (q->left != nullptr) {
            queue.enqueue(q->left);
        }
        if (q->right != nullptr) {
            queue.enqueue(q->right);
        }
    }
}

/**
 * 二叉树的逆转
 * 层次遍历的方式
 *
 * @tparam T
 */
template<class T>
void BinTree<T>::revertByStackBinTree(BinTreeNode<T> *node) {

    BinTreeNode<T> *p;
    if (node == nullptr) {
        return;
    } else {
        p = node->left;
        node->left = revertByStackBinTree(node->right);
        node->right = revertByStackBinTree(p);
    }
}

