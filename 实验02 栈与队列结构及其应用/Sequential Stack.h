#pragma once
//˳��ջ

typedef int SDatatype;	//ջ�洢������
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

