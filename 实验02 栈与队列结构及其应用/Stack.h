#pragma once
//Ë³ÐòÕ»

#include<iostream>

#define MAXSSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0


typedef int SDatatype;	//Õ»´æ´¢µÄÊý¾Ý

//- - - - - Á´Õ»µÄ´æ´¢½á¹¹- - - - - 

typedef struct StackNode
{
	SDatatype data;
	struct StackNode* next;
}StackNode, * LinkStack;


// -----Ë³ÐòÕ»µÄ´æ´¢½á¹¹ - ----
typedef struct
{
	SDatatype* base;//Õ»µ×Ö¸Õë
	int top;
	int stacksize;
}SqStack;

//Ë³ÐòÕ»
Status InitStack(SqStack& S);
Status StackPush(SqStack& S, SDatatype e);
Status StackPop(SqStack& S);
Status StackTraverse(SqStack S);

//Á´Õ»
Status InitStack(LinkStack& S);
Status StackPush(LinkStack& S, SDatatype e);
Status StackPop(LinkStack& S);
Status StackTraverse(LinkStack S);
bool StackEmpty(LinkStack S);

//½øÖÆ×ª»»
void conversion(int N);
Status StackPop(LinkStack& S, SDatatype &e);
