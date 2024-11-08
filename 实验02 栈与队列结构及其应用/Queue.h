#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXQSIZE 100

#include<iostream>
using namespace std;

typedef int QElemtype;	//队列存储的数据

typedef int Status;
#define OK 1
#define ERROR 0

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
Status EnQueue(QNode& Q, QElemtype e);
Status DeQueue(QNode& Q);
Status QueueTraverse(QNode Q);
