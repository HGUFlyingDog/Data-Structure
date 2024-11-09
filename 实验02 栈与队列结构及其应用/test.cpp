//调用函数
#include"Queue.h"
Status QueueTest()
{
	cout << "顺序队列测试部分：" << endl;
	Queue Q;
	InitQueue(Q);
	QueueTraverse(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);
	EnQueue(Q, 8);
	DeQueue(Q);
	QueueTraverse(Q);
	return OK;
}


Status QueueTest_Link()
{
	cout << "链式队列测试部分：" << endl;
	LinkQueue Q;
	InitQueue(Q);
	//QueueTraverse(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);
	EnQueue(Q, 8);
	DeQueue(Q);
	QueueTraverse(Q);

	return OK;
}
int main()
{
	QueueTest();
	QueueTest_Link();

}