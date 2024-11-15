#include"Tree.h"
#include"Queue.h"
int main()
{
	//BiTree T;
	//CreateBiTree(T);

	//InOrderTraverseRecursion(T);
	//cout << endl;
	//InOrderTraverse_NoRecursion(T);
	//cout << endl;
	
	LinkQueue Q;
	InitQueue(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);

	DeQueue(Q);
	DeQueue(Q);
	DeQueue(Q);
	return 0;
}

