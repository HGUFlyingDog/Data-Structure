#include"Tree.h"

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

void InOrderTraverse(BiTree T)
{
	cout << "���������������Ŷ";
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
	cout << "�����ǰ��������Ŷ";

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
	cout << "����Ǻ����������Ŷ";

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