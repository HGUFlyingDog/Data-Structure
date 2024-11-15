#include"Tree.h"
#include"stack.h"
#include"Queue.h"

void CreateBiTree(BiTree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#')
		T = nullptr;
	//T = nullptr; 防止遍历的时候造成越界访问
	// 晚一步把T的孩子置空
	else
	{
		T = new BiTNode;
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
		return;
	}

	return;
}

void InOrderTraverseRecursion(BiTree T)
{
	if (T == nullptr)
	{
		return;
	}
	else
	{
		InOrderTraverseRecursion(T->lchild);
		cout << T->data;
		InOrderTraverseRecursion(T->rchild);
	}
}

void PreOrderTraverseRecursion(BiTree T)
{
	//cout << "这个是前序遍历结果哦";

	if (T == nullptr)
	{
		return;
	}
	else
	{
		cout << T->data;
		PreOrderTraverseRecursion(T->lchild);
		PreOrderTraverseRecursion(T->rchild);
	}
}

void PostOrderTraverseRecursion(BiTree T)
{
	if (T == nullptr)
	{
		return;
	}
	else
	{
		PostOrderTraverseRecursion(T->lchild);

		PostOrderTraverseRecursion(T->rchild);
		cout << T->data;
	}
}


void InOrderTraverse_NoRecursion(BiTree T)
{
	BiTree temp = T;
	LinkStack S;
	InitStack(S);
	while (temp || !StackEmpty(S))
	{
		if (temp)
		{
			StackPush(S, temp);//T入栈
			temp = temp->lchild; // T = T->lchild 遍历
		}
		else //T为空
		{
			StackPop(S, temp);
			cout << temp->data;
			temp = temp->rchild;
		}
	}
}

void PreOrderTraverse_NoRecursion(BiTree T)
{
	BiTree temp = T;
	LinkStack S;
	InitStack(S);
	while (temp || !StackEmpty(S))
	{
		if (temp)
		{
			cout << temp->data;
			StackPush(S, temp);//T入栈
			temp = temp->lchild; // T = T->lchild 遍历
		}
		else //T为空
		{
			StackPop(S, temp);
			temp = temp->rchild;
		}
	}
}

void LevelOrderTraverse(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	EnQueue(Q, T);

	while (!QueueEmpty(Q))
	{
		
		DeQueue(Q, T);
		cout << T->data;
		if (T->lchild)
		{
			EnQueue(Q, T->lchild);
		}
		if (T->rchild)
		{
			EnQueue(Q, T->rchild);
		}

	}
	return;
	
}

//树的节点个数
int NodeCount(BiTree T)
{
	if (T == nullptr) return 0;
	else return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}


//树的叶节点个数
int LeafNodeCount(BiTree T)
{
	if (T == nullptr) return 1;
	else return (NodeCount(T->lchild) + NodeCount(T->rchild))/2;
}

//树的深度
int Depth(BiTree T)
{
	if (T == nullptr) return 0;
	else return Depth(T->lchild) > Depth(T->rchild) ? Depth(T->lchild) +1: Depth(T->rchild)+1;
}