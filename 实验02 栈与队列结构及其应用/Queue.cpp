#include"Queue.h"


void QueueInit(Queue* pq)
{
	pq = (Queue*)malloc(sizeof(Queue));
}
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq); 
QDatatype QueueBack(Queue* pq);