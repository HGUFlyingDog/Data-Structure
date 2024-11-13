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
	TElemType data;						// 节点数据域
	struct BiTNode* lchild, * rchild;	//左右孩子指针
}BiTNode, * BiTree;

Status InitBiTree(BiTree&T);

