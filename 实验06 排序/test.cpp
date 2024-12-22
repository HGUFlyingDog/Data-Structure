#include <iostream>
using namespace std;
#include "sort.h"
#include "TestOP.h"
//#include "TestOP.h"
#define  NDA NearlyOrderedArray

int main()
{
	//int test1[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test2[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test3[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test4[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test5[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test6[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//int test7[20] = {1,2,3,4,15,6,7,8,19,10,11,12,13,14,5,16,17,18,9,20};
	//

	//SelectSort(test, 5); 
	//for (auto x : test)
	//{
	//	cout << x << " ";
	//}
	//CheckSort();

	TestOrder();
	
	TestReOrder();

	TestOP();

	return 0;
}