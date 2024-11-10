#pragma once
//顺序栈

#include<iostream>

#define MAXSSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0


typedef int SDatatype;	//栈存储的数据

//- - - - - 链栈的存储结构- - - - - 

typedef struct StackNode
{
	SDatatype data;
	struct StackNode* next;
}StackNode, * LinkStack;


// -----顺序栈的存储结构 - ----
typedef struct
{
	SDatatype* base;//栈底指针
	int top;
	int stacksize;
}SqStack;

//顺序栈
Status InitStack(SqStack& S);
Status StackPush(SqStack& S, SDatatype e);
Status StackPop(SqStack& S);
Status StackTraverse(SqStack S);

//链栈
Status InitStack(LinkStack& S);
Status StackPush(LinkStack& S, SDatatype e);
Status StackPop(LinkStack& S);
Status StackTraverse(LinkStack S);
bool StackEmpty(LinkStack S);

//进制转换
void conversion(int N,int num);//进制转换
Status StackPop(LinkStack& S, SDatatype &e);//另一种方式的出栈方式
void EvaluateExpression();//后缀表达式求值