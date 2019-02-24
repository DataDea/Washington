
    C++数据结构的实现，参考书C++数据结构与算法

* 代码结构
```
    master:最终稳定代码
    dev:开发代码
    test:测试代码
    如果需要下载学习，请克隆master分支

```

* 目录
```
- **二叉树(bintree)**:

    1. 构建二叉树

    2. 遍历二叉树<br>
        2.1 递归的方式<br>
            2.1.1 前序---preorder<br>
            2.1.2 中序---inorder<br>
            2.1.3 后序---postorder<br>
        2.2 ️非递归的方式<br>
            2.2.1 前序---iterativePreorder<br>
            2.2.2 中序---iterativePostorder<br>
            2.2.3 后序---iterativePostorder<br>
            2.2.4 广度遍历---breadthFirst<br>

- **线索二叉树(threadTree)**:

    1. 创建线索二叉树---createThreadTree

- **排序(insert)**:

    1. 插入排序
    2. 选择排序
    3. 冒泡排序
    4. 快速排序


- **链表(list)**:

    1. 创建链表---generateList
    2. 遍历链表---iterateList
    3. 链表反转(递归方式)--revertListByStack
    4. 链表反转(非递归方式)--revertListNoStack
```

* 代码分支说明

```
    master 代码的主分支，完整无BUG代码
    test   代码的测试分支，可能存在BUG
    dev    代码的开发分支，一定存在BUG
```