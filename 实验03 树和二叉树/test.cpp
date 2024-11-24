#include"Tree.h"
#include"Queue.h"
int main()
{
	
	BiTree T;
	CreateBiTree(T);

	cout << endl << "��������Ľ��Ϊ��";
	PreOrderTraverseRecursion(T);

	cout << endl << "��������Ľ��Ϊ��";
	InOrderTraverseRecursion(T);

	cout << endl << "��������Ľ��Ϊ��";
	PostOrderTraverseRecursion(T);

	cout << endl << "���������(�ǵݹ�)�Ľ��Ϊ��";
	PreOrderTraverse_NoRecursion(T);

	cout << endl << "�������(�ǵݹ�)�Ľ��Ϊ��";
	InOrderTraverse_NoRecursion(T);

	cout << endl << "��������Ľ��Ϊ��";
	LevelOrderTraverse(T);

	cout << endl << "�ڵ��������Ϊ��" << NodeCount(T) << endl << endl << endl;

	cout << "����Ҷ�ڵ�����Ϊ��" << countLeafNodes(T) << endl;

	cout << "�������Ϊ��" << Depth(T) << endl;

	return 0;
}