//µ÷ÓÃº¯Êý
#include"Queue.h"
int main()
{
	Queue Q;
	InitQueue(Q);
	QueueTraverse(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);
	EnQueue(Q, 8);
	DeQueue(Q);
	QueueTraverse(Q);

}