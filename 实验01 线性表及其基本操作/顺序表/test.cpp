#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

int main()
{
	SL s;
	SL& test = s;
	Fun_test(test);//测试增删查改


	// 用顺序表表示整数集合 A, B，实现 A = A ∪ B 和A = A ∩ B
	SL A;
	SL B;
	SLInit(&A);
	SLInit(&B);
	//{ 2, 5, 18, 3, 45, 8, 9, 22 } 
	SLPushFront(&A, 2);
	SLPushFront(&A, 5);
	SLPushFront(&A, 18);
	SLPushFront(&A, 3);
	SLPushFront(&A, 45);
	SLPushFront(&A, 8);
	SLPushFront(&A, 9);
	SLPushFront(&A, 22);
	SLPushFront(&A,10);

	//1, 4, 6, 9, 10
	SLPushFront(&B, 1);
	SLPushFront(&B,4);
	SLPushFront(&B, 6);
	SLPushFront(&B, 9);
	SLPushFront(&B, 10);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	printf("A:");
	SLPrint(&A);
	printf("B:");
	SLPrint(&B);

	A_union_B(&A, &B);
	
	intersection(&A, &B);

	return 0;
}