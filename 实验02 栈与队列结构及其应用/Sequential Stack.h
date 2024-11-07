#pragma once
//Ë³ÐòÕ»

typedef int SDatatype;	//Õ»´æ´¢µÄÊý¾Ý
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

