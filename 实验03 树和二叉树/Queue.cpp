#include "Queue.h"
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
    p->next = nullptr; // 新节点的next应初始化为nullptr

    if (QueueEmpty(Q))
    {
        Q.front = Q.rear = p;
    }
    else
    {
        Q.rear->next = p; // 将新节点链接到队尾
        Q.rear = p; // 更新队尾指针
    }

    return OK;
}

Status DeQueue(LinkQueue& Q)
{
    if (QueueEmpty(Q)) return ERROR; // 队列空
    cout << Q.front->data << "已出队" << endl;
    QNode* p = Q.front;
    Q.front = Q.front->next;
    delete p; // 释放出队节点的内存
    if (Q.front == nullptr) // 如果队列为空，更新队尾指针
    {
        Q.rear = nullptr;
    }
    return OK;
}

Status QueueTraverse(LinkQueue Q)
{
    QNode* p = Q.front;
    while (p != nullptr) // 遍历到队尾
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
    QNode* p = Q.front;
    Q.front = Q.front->next;
    delete p; // 释放出队节点的内存
    if (Q.front == nullptr) // 如果队列为空，更新队尾指针
    {
        Q.rear = nullptr;
    }
    return OK;
}

bool QueueEmpty(LinkQueue Q)
{
    return Q.front == nullptr;
}
