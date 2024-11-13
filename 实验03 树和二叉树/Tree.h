#pragma once

#include<iostream>
using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0
typedef char TElemType;

typedef struct BiTNode {
	TElemType data;						// �ڵ�������
	struct BiTNode* lchild, * rchild;	//���Һ���ָ��
}BiTNode, * BiTree;

Status InitBiTree(BiTree&T);

