#include"SList.h"
#include"Polynomial.h"
int main()
{
	TestSList();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "����ʽ��Ӳ���" << endl;

	PPT A;
	PPT B;

	CreatePolynomial(A);
	CreatePolynomial(B);
	// ϵ�� ָ��
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(A, 5, 3);
	TermInsert(B, 4, 3);
	TermInsert(B, 100, 3);

	TermInsert(A, 10086, 54);

	PTMerge(A, B);
	PTPrint(A);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}