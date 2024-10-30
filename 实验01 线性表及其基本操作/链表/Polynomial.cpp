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

	if ((*newnode)!=nullptr)// ���ָ�����
	{
		(*newnode)->coef += coef;

		if ((*newnode)->coef==0)// ϵ��Ϊ0 ɾ���ýڵ�
		{
			PPT temp = *newnode;
			*newnode = (*newnode)->next; 
			delete temp;

		}
	}

	else//�������Ҫ�½�һ���ڵ�
	{
		(*newnode) = new PT;
		(*newnode)->exp = exp;
		(*newnode)->coef = coef;
		(*newnode)->next = nullptr;
	}
	
}	

void PTPrint(PPT node)
{
	while (node!=nullptr)
	{
		cout << node->exp << "  " << node->coef << endl;
		node = node->next;
	}

}


