#include"sort.h"

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void BubbleSort(int* a, int n)
{
	for (int j = n - 1; j >= 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (a[i] >= a[i + 1])
				swap(a[i], a[i + 1]);
		}
	}
}
//debug 记录
//会写单趟，重复的话找不准i和j 的位置
