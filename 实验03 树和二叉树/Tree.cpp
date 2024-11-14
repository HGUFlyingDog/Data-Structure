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