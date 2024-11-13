#pragma once

#include<iostream>
using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0
typedef int TElemType;

typedef struct BiTNode {
    TElemType data;
    struct BiTNode* lchild, * rchild;
} BiTNode, *BiTree;


void CreateBiTree(BiTree&T);

