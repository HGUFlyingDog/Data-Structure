#include"Tree.h"

void CreateBiTree(BiTree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#')
		return;
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

void InOrderTraverse(BiTree T)
{
	if (T == nullptr)
	{
		return;
	}
	else
	{
		InOrderTraverse(T->lchild);
		cout << T->data;
		InOrderTraverse(T->rchild);
	}
}

void PreOrderTraverse(BiTree T)
{
	if (T == nullptr)
	{
		return;
	}
	else
	{
		cout << T->data;
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}

void PostOrderTraverse(BiTree T)
{
	if (T == nullptr)
	{
		return;
	}
	else
	{
		PostOrderTraverse(T->lchild);

		PostOrderTraverse(T->rchild);
		cout << T->data;
	}
}
