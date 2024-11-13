#include"Tree.h"

void CreateBiTree(BiTree& T) 
{
    char ch;
    cin >> ch;
    if (ch == '#') {
        T = nullptr;  // 递归结束，建空树
    }
    else {
        T = new BiTNode;  // 生成根节点
        T->data = ch;  // 根节点数据域置为ch
        CreateBiTree(T->lchild);  // 递归创建左子树
        CreateBiTree(T->rchild);  // 递归创建右子树
    }
}