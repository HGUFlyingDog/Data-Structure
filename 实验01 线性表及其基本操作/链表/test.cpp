#include"SList.h"
#include"Polynomial.h"
int main()
{
	TestSList();
	
	PPT A;
	PPT B;

	CreatePolynomial(A);
	CreatePolynomial(B);
	// 系数 指数
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(B, 4, 3);
	TermInsert(A, 0, 2);

	
	PTPrint(A);

	return 0;
}