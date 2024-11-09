#pragma once
//顺序栈
#define MAXSSIZE 100

#include<iostream>
using namespace std;
typedef int Status;
#define OK 1
#define ERROR 0


typedef int SDatatype;	//栈存储的数据

//- - - - - 链栈的存储结构- - - - - 
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


// -----顺序栈的存储结构 - ----
typedef struct
{
	SDatatype* base;//栈底指针
	SDatatype* top;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S);

Status Push(SqStack& S, SDatatype e);