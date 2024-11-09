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
	SDatatype data;
	struct StackNode* next;
}StackNode, * LinkStack;


// -----˳��ջ�Ĵ洢�ṹ - ----
typedef struct
{
	SDatatype* base;//ջ��ָ��
	int top;
	int stacksize;
}SqStack;

//˳��ջ
Status InitStack(SqStack& S);
Status StackPush(SqStack& S, SDatatype e);
Status StackPop(SqStack& S);
Status StackTraverse(SqStack S);

//��ջ
Status InitStack(LinkStack& S);
Status StackPush(LinkStack& S, SDatatype e);
Status StackPop(LinkStack& S);
Status StackTraverse(LinkStack S);
bool StackEmpty(LinkStack S);

//����ת��
void conversion(int N);
Status StackPop(LinkStack& S, SDatatype &e);
