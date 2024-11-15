#include"Queue.h"
//- - - - - 队列的链式存储结构- - - - - 
//4.*采用链式存储结构表示抽象数据类型队列，并实现队的初始化、入队、出队等各种操作。

//链式队列的初始化
Status InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = new QNode;
	Q.front->next = nullptr;
	return OK;
}

Status EnQueue(LinkQueue& Q, QElemtype e)
{
	
	
	QNode* p = new QNode;
	p->data = e;
	if (Q.rear->next == nullptr)
	{
		Q.rear = p;
	}
	p->next = Q.front;
	Q.front = p;
	return OK;
}

Status DeQueue(LinkQueue& Q)
{
	cout << Q.front->data-><<"已出队"<< endl;
	Q.front = Q.front->next;
	return OK;

}

Status QueueTraverse(LinkQueue Q)
{
	QNode* p = Q.front;
	while (p->next!=nullptr)
	{
		cout << p->data<<"->";
		p = p->next;
	}
	cout << "NULL";
	return OK;
}


//另一种形式的出队列，用参数返回类型
Status DeQueue(Queue& Q, QElemtype& e)
{
	if (Q.front == Q.rear) return ERROR; // 队列空
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
	return OK;
}
