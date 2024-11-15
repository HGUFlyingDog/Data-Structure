#include"Tree.h"
#include"stack.h"
#include"Queue.h"

void CreateBiTree(BiTree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#')
		T = nullptr;
	//T = nullptr; ��ֹ������ʱ�����Խ�����
	// ��һ����T�ĺ����ÿ�
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
	//cout << "�����ǰ��������Ŷ";

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
			StackPush(S, temp);//T��ջ
			temp = temp->lchild; // T = T->lchild ����
		}
		else //TΪ��
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
			StackPush(S, temp);//T��ջ
			temp = temp->lchild; // T = T->lchild ����
		}
		else //TΪ��
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
//	while (T||QueueEmpty(Q))//T ��Ϊ�ջ��� ���в�Ϊ��
//	{
//		if (T)//T���ǿյ�
//		{
//			EnQueue(Q, T);
//		}
//		else//T�ǿյ�
//		{
//			DeQueue(Q, T);
//
//		}
//		
//
//		
//	}
//}