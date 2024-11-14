#include"Tree.h"

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

void InOrderTraverse(BiTree T)
{
	cout << "这个是中序遍历结果哦";
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
	cout << "这个是前序遍历结果哦";

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
	cout << "这个是后续遍历结果哦";

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