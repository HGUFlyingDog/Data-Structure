#include"Polynomial.h"
#include"SList.h"

void CreatePolynomial(PPT& node)
{
	node = new PT;
	node->next = NULL;
	node->coef = 0;
	node->exp = 0;

}

void TermInsert(PPT& node, int coef,int exp )
{
	PPT *newnode = &node;

	while (*newnode != nullptr&&(*newnode)->exp != exp )
	{
		newnode = &((*newnode)->next);
	}

	if ((*newnode)!=nullptr)// 如果指数相符
	{
		(*newnode)->coef += coef;

		if ((*newnode)->coef==0)// 系数为0 删除该节点
		{
			PPT temp = *newnode;
			*newnode = (*newnode)->next; 
			delete temp;

		}
	}

	else//否则就需要新建一个节点
	{
		(*newnode) = new PT;
		(*newnode)->exp = exp;
		(*newnode)->coef = coef;
		(*newnode)->next = nullptr;
	}
	
}	

void PTPrint(PPT node)
{
	cout << "最终结果为：";
	while (node!=nullptr)
	{
		cout<< node->coef << "X^" << node->exp ;
		
		node = node->next;
		if (node != nullptr)
		{
			cout << "+";
		}
	}

}

void PTMerge(PPT& nodeA, PPT& nodeB)
{
	while (nodeB!=nullptr)
	{
		TermInsert(nodeA, nodeB->coef, nodeB->exp);
		nodeB = nodeB->next;
	}
}

