//���ú���
#include"Queue.h"
Status QueueTest()
{
	cout << "˳����в��Բ��֣�" << endl;
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
	cout << "��ʽ���в��Բ��֣�" << endl;
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