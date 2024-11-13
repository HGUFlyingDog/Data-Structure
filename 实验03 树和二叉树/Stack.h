#pragma once
//˳��ջ

#include<iostream>

#define MAXSSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0


typedef int BiTree;	//ջ�洢������

//- - - - - ��ջ�Ĵ洢�ṹ- - - - - 

typedef struct StackNode
{
	BiTree data;
	struct StackNode* next;
}StackNode, * LinkStack;


// -----˳��ջ�Ĵ洢�ṹ - ----
typedef struct
{
	BiTree* base;//ջ��ָ��
	int top;
	int stacksize;
}SqStack;

//˳��ջ
Status InitStack(SqStack& S);
Status StackPush(SqStack& S, BiTree e);
Status StackPop(SqStack& S);
Status StackTraverse(SqStack S);

//��ջ
Status InitStack(LinkStack& S);
Status StackPush(LinkStack& S, BiTree e);
Status StackPop(LinkStack& S);
Status StackTraverse(LinkStack S);
bool StackEmpty(LinkStack S);