#pragma once


#include<iostream>
#include <cassert>

#define MAXQSIZE 100

using  std::cout;
using  std::cin;
using  std::endl;

typedef int Status;
#define OK 1
#define ERROR 0

typedef int QElemtype;	//队列存储的数据

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

typedef struct Queue
{
	QElemtype* base; // 新增的数组成员
	int front; // 队列头索引
	int rear;  // 队列尾索引
} Queue;
//顺序循环队列的结构

Status InitQueue(Queue& Q);
Status EnQueue(Queue& Q, QElemtype e);
Status DeQueue(Queue& Q);
Status QueueTraverse(Queue Q);

Status InitQueue(LinkQueue& Q);
Status EnQueue(LinkQueue& Q, QElemtype e);
Status DeQueue(LinkQueue& Q);
Status QueueTraverse(LinkQueue Q);
