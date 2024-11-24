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
	if (T == nullptr) return 0;//如果递归发现T是空指针，则返回节点的数量为0
	else return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;//否则（T不是有左右节点）那么返回左右节点的数量的和并且加上自己的所在的节点
}

//计算叶子数量
int countLeafNodes(BiTree T)
{
	if (T == nullptr) //如果递归发现T空是指针，则返回叶子的数量为0
	return 0;

	// 如果是叶子节点，返回1
	if (T->lchild == nullptr && T->rchild == nullptr)
		return 1;

	// 递归计算左子树和右子树的叶子节点个数并相加
	return countLeafNodes(T->lchild) + countLeafNodes(T->rchild);
}

//树的深度
int Depth(BiTree T)
{
	//如果递归发现T空是指针，则返回叶子的数量为0
	if (T == nullptr) return 0;

	//否则返回左树深度和右树的深度比较大的那个并且加上自己的深度
	else return Depth(T->lchild) > Depth(T->rchild) ? Depth(T->lchild) + 1 : Depth(T->rchild) + 1;
}