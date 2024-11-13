#include"Tree.h"

void CreateBiTree(BiTree& T) 
{
    char ch;
    cin >> ch;
    if (ch == '#') {
        T = nullptr;  // �ݹ������������
    }
    else {
        T = new BiTNode;  // ���ɸ��ڵ�
        T->data = ch;  // ���ڵ���������Ϊch
        CreateBiTree(T->lchild);  // �ݹ鴴��������
        CreateBiTree(T->rchild);  // �ݹ鴴��������
    }
}