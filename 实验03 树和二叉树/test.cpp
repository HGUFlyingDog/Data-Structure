#include"Tree.h"
#include"Queue.h"
int main()
{
	
	BiTree T;
	CreateBiTree(T);

	cout << endl << "先序遍历的结果为：";
	PreOrderTraverseRecursion(T);

	cout << endl << "中序遍历的结果为：";
	InOrderTraverseRecursion(T);

	cout << endl << "后序遍历的结果为：";
	PostOrderTraverseRecursion(T);

	cout << endl << "先序序遍历(非递归)的结果为：";
	PreOrderTraverse_NoRecursion(T);

	cout << endl << "中序遍历(非递归)的结果为：";
	InOrderTraverse_NoRecursion(T);

	cout << endl << "层序遍历的结果为：";
	LevelOrderTraverse(T);

	cout << endl << "节点的总数量为：" << NodeCount(T) << endl << endl << endl;

	cout << "树的叶节点数量为：" << countLeafNodes(T) << endl;

	cout << "树的深度为：" << Depth(T) << endl;

	return 0;
}