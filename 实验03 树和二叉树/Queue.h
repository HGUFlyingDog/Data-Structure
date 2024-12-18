#pragma once
#include"Tree.h"
#include<iostream>

#define MAXQSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0

typedef BiTree QElemtype;	//队列存储的数据

typedef struct QNode
{
	QElemtype data;
	struct QNode* next;
} QNode, * QueuePtr;

typedef struct
{
	QueuePtr front; // 队头指针
	QueuePtr rear;  // 队尾指针
} LinkQueue;

Status InitQueue(LinkQueue& Q);//队列的初始化
Status EnQueue(LinkQueue& Q, QElemtype e);//入队列
Status DeQueue(LinkQueue& Q);//出队列
Status QueueTraverse(LinkQueue Q);//队列的遍历

Status DeQueue(LinkQueue& Q, QElemtype& e);//出队列另一种传参形式
bool QueueEmpty(LinkQueue Q); //队列为空
