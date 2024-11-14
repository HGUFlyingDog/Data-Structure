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
    struct BiTNode* lchild, * rchild;
} BiTNode;
typedef BiTNode* BiTree;


void CreateBiTree(BiTree& T);
//µÝ¹é±éÀú
void InOrderTraverseRecursion(BiTree T);
void PreOrderTraverseRecursion(BiTree T);
void PostOrderTraverseRecursion(BiTree T);
//·ÇµÝ¹é±éÀú
void InOrderTraverse_NoRecursion(BiTree T);
void PreOrderTraverse_NoRecursion(BiTree T);

