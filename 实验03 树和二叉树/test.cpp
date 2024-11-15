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

	cout<< "节点的总数量为：" << NodeCount(T)<<endl << endl << endl;
	cout << "树的叶节点数量为：" << LeafNodeCount(T) << endl;

	cout<<"树的深度为：" <<Depth(T) << endl;

	return 0;
}

