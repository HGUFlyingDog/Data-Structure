#include"Tree.h"
#include"Queue.h"
int main()
{
	BiTree T;
	CreateBiTree(T);

	InOrderTraverseRecursion(T);
	cout << endl;
	//InOrderTraverse_NoRecursion(T);
	//cout << endl;
	//LevelOrderTraverse(T);

	cout<< "�ڵ��������Ϊ��" << NodeCount(T)<<endl << endl << endl;
	cout << "����Ҷ�ڵ�����Ϊ��" << LeafNodeCount(T) << endl;

	cout<<"�������Ϊ��" <<Depth(T) << endl;

	return 0;
}

