//调用函数
#include"Queue.h"
#include"Stack.h"

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

Status SqStackTest()
{
	SqStack  S;
	InitStack(S);
	StackPush(S, 5);
	StackPush(S, 4);
	StackPush(S, 3);
	StackPush(S, 2);

	StackPop(S);

	StackTraverse(S);
	return OK;
}

Status SqStackTest_Link()
{
	SqStackTest();
	cout << endl;
	cout << endl;
	cout << endl;
	LinkStack S;
	InitStack(S);
	StackPush(S, 5);
	StackPush(S, 4);


	StackPop(S);

	StackTraverse(S);
	return OK;
}
int main()
{
	//QueueTest();
	//QueueTest_Link();
	
	//conversion(15,16);
	EvaluateExpression();
}

