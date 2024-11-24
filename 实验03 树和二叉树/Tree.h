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
	TElemType data;
	struct BiTNode	* lchild, *rchild;
}BiTNode;
typedef BiTNode* BiTree;

void CreateBiTree(BiTree& T);
//递归遍历
void InOrderTraverseRecursion(BiTree T);
void PreOrderTraverseRecursion(BiTree T);
void PostOrderTraverseRecursion(BiTree T);
//非递归遍历
void InOrderTraverse_NoRecursion(BiTree T);
void PreOrderTraverse_NoRecursion(BiTree T);
//层序遍历
void LevelOrderTraverse(BiTree T);

//计算节点数量（多写了，但是没啥问题就不删除了）
int NodeCount(BiTree T);
//计算树的深度
int Depth(BiTree T);
//计算树的叶节点的数量
int countLeafNodes(BiTree T);