#include <iostream>
using namespace std;
#include "sort.h"
#include "TestOP.h"
//#include "TestOP.h"
#define  NDA NearlyOrderedArray

int main()
{
	int test[6] = {3,2,4,1,5,4};
	

	//Qsort(test, 0, 6); //[)
	//for (auto x : test)
	//{
	//	cout << x << " ";
	//}

	Testorder();

	//TestOP();

	return 0;
}