#include <iostream>
using namespace std;
#include "sort.h"
#include "TestOP.h"
//#include "TestOP.h"
#define  NDA NearlyOrderedArray

int main()
{
	int NDA[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,19,18,20 };
	int test[5] = { 4,2,1,3 ,4};


	Testorder();


	TestOP();
	
	return 0;
}