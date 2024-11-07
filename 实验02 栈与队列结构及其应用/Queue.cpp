#include"Queue.h"
#include<iostream>

#define INITSIZE 4

using namespace std;
void QueueInit(Queue& pq)
{
	pq.size = INITSIZE;
	pq.array = new QDatatype[INITSIZE]; // 使用 new 分配数组空间
	pq.front = 0;
	pq.rear = 0;
	pq.count = 0;
}

void QueuePush(Queue& pq, QDatatype x)
{

}
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq);
QDatatype QueueBack(Queue* pq);