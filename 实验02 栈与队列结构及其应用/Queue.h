#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXQSIZE 100

#include<iostream>
using namespace std;

typedef int QElemtype;	//队列存储的数据

typedef int Status; 
#define OK 1
#define ERROR 0



//typedef struct QueueNode
//{
//    struct QueueNode* next;
//    QElemtype data;
//    QNode* head;
//    QNode* tail;
//}QNode;	//链式队列的结构

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

//Status DestroyQueue(Queue& Q);
//Status EnQueue(Queue* pq, QElemtype x);
//Status QueuePop(Queue* pq);
//int QueueSize(Queue* pq);
//bool QueueEmpty(Queue* pq);
//QElemtype QueueFront(Queue* pq);
//QElemtype QueueBack(Queue* pq);

//InitQueue(＆Q)
//操作结果 ：构造一个空队列Q。
//DestroyQueue(＆Q)
//初始条件 ：队列Q已存在。
//操作结果 ：队列Q被销毁，不再存在。
//ClearQueue(＆Q)
//初始条件 ：队列Q已存在。
//操作结果 ：将Q清为空队列。
//QueueEmpty(Q)
//初始条件 ：队列Q已存在。
//操作结果 ：若Q为空队列，则返回true，否则返回false。
//QueueLength(Q)
//初始条件 ：队列Q已存在。
//操作结果 ：返回Q的元素个数，即队列的长度。
//GetHead(Q)
//初始条件 ：Q为非空队列。
//操作结果 ：返回Q的队头元素。
//EnQueue(＆Q, e)
//初始条件 ：队列Q已存在。
//操作结果 ：插入元素e为Q的新的队尾元素。
//DeQueue(＆Q, ＆e)
//初始条件 ：Q为非空队列。
//操作结果 ：删除Q的队头元素，并用e返回其值。
//QueueTraverse(Q)
//初始条件 ：Q已存在且非空。
//操作结果 ：从队头到队尾，依次对Q的每个数据元素进行访问。




