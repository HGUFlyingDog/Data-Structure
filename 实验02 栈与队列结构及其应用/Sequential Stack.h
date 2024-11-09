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


typedef int SDatatype;	//ջ�洢������

//- - - - - ��ջ�Ĵ洢�ṹ- - - - - 
typedef struct StackNode
{
	struct StackNode* next;
	SDatatype data;
}SNode;

typedef struct Stack
{
	Stack* tail;
	int size;
}Stack;


// -----˳��ջ�Ĵ洢�ṹ - ----
typedef struct
{
	SDatatype* base;//ջ��ָ��
	int top;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S);

Status StackPush(SqStack& S, SDatatype e);
Status StackPop(SqStack& S);
Status StackTraverse(SqStack S);
