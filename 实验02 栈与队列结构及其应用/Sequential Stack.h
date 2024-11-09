#pragma once
//˳��ջ
#define MAXSSIZE 100

#include<iostream>
using namespace std;
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
	SDatatype* top;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S);

Status Push(SqStack& S, SDatatype e);