#include"Tree.h"

int main()
{
	BiTree T;
	CreateBiTree(T);

	InOrderTraverseRecursion(T);
	cout << endl;
	InOrderTraverse_NoRecursion(T);
	cout << endl;
	
}

