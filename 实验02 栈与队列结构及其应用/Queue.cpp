#include"Queue.h"

//3.采用顺序存储结构表示抽象数据类型队列，并实现队的初始化、入队、出队等各种操作。

Status InitQueue(Queue& Q)
{
	Q.base = new QElemtype[MAXQSIZE];
	Q.front = 0;
	Q.rear = 0;
	return OK;
}

Status EnQueue(Queue& Q, QElemtype e)
{
	
	if ((Q.rear + 1) % MAXQSIZE == Q.front)
		return ERROR ;//循环队列满
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
	return OK;
}
Status DeQueue(Queue& Q)
{
	
	if (Q.front == Q.rear) 
		return ERROR; //队空
	cout<< Q.base[Q.front]<<"已出队列"<<endl;    //保存队头元素
	Q.front = (Q.front + 1) % MAXQSIZE;
	return OK;
}
int QueueSize(Queue Q)
{
	return ((Q.rear - Q.front + MAXQSIZE) % MAXQSIZE);
}

Status QueueTraverse(Queue Q)
{
	if (Q.front == Q.rear)
	{
		cout << "这是空的，啥都没有(╯﹏╰)" << endl;
		return ERROR;
	}

	int i = Q.front;
	while (i != Q.rear)
	{
		cout << Q.base[i] << " ";
		i = (i + 1) % MAXQSIZE;
	}
	cout << endl;
	return OK;
}

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
	cout << Q.front->data<<"已出队"<< endl;
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

