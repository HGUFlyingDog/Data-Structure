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

//void LevelOrderTraverse(BiTree T)
//{
//	LinkQueue Q;
//	InitQueue(Q);
//	
//	while (T||QueueEmpty(Q))//T 不为空或者 队列不为空
//	{
//		if (T)//T不是空的
//		{
//			EnQueue(Q, T);
//		}
//		else//T是空的
//		{
//			DeQueue(Q, T);
//
//		}
//		
//
//		
//	}
//}