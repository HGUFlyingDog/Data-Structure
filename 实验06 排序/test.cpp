#include <iostream>
using namespace std;
#include "sort.h"
#include "TestOP.h"
//#include "TestOP.h"
#define  NDA NearlyOrderedArray

int main()
{
	int test[5] = {3,2,4,1,5};
	

	SelectSort(test, 5); 
	for (auto x : test)
	{
		cout << x << " ";
	}
	//CheckSort();

	//Testorder();
	
	//TestOP();

	return 0;
}