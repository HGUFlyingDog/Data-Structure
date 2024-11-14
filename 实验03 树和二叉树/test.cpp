#include"Tree.h"

int main()
{
	BiTree T;
	CreateBiTree(T);
	//cout << "这个是后续遍历结果哦";
	//PreOrderTraverseRecursion(T);
	InOrderTraverse_NoRecursion(T);

}