#include"Queue.h"
//- - - - - 队列的链式存储结构- - - - -
//4.*采用链式存储结构表示抽象数据类型队列，并实现队的初始化、入队、出队等各种操作。

//链式队列的初始化
Status InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = nullptr;
	return OK;
}

Status EnQueue(LinkQueue& Q, QElemtype e)
{
	if (e == nullptr) return ERROR;
	QNode* p = new QNode;
	p->data = e;

	if (QueueEmpty(Q))
	{
		Q.front = Q.rear = p;
	}
	else
	{
		p->next = Q.rear;
		Q.rear->next = p;
		Q.rear = Q.rear->next;
	}

	return OK;
}

Status DeQueue(LinkQueue& Q)
{
	cout << Q.front->data << "已出队" << endl;
	Q.front = Q.front->next;
	return OK;
}

Status QueueTraverse(LinkQueue Q)
{
	QNode* p = Q.front;
	while (p->next != nullptr)
	{
		cout << p->data << "->";
		p = p->next;
	}
	cout << "NULL";
	return OK;
}

//另一种形式的出队列，用参数返回类型
Status DeQueue(LinkQueue& Q, QElemtype& e)
{
	if (QueueEmpty(Q)) return ERROR; // 队列空
	e = Q.front->data;
	Q.front = Q.front->next;
	return OK;
}

bool QueueEmpty(LinkQueue Q)
{
	return!(Q.front);
}