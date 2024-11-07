#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 10

#include<iostream>
using namespace std;

typedef int QDatatype;	//队列存储的数据


typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
    QNode* head;
    QNode* tail;
}QNode;	//链式队列的结构

typedef struct Queue
{
    QDatatype* array; // 新增的数组成员
    int front; // 队列头索引
    int rear;  // 队列尾索引
    int size; //队列最大大小
    int count //目前大小
} Queue;
//顺序队列的结构



void QueueInit(Queue &pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq);
QDatatype QueueBack(Queue* pq);





