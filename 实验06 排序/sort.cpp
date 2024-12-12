#include"sort.h"

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void CheckSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		assert(a[i] <= a[i + 1]);
	}
}

void BubbleSort(int* a, int n)
{
	
	for (int j = n - 1; j >= 0; j--)
	{
		

		int flag = 0;
		for (int i = 0; i < j; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				flag = 1;
			}
		}

		if (flag == 0)
		{
			cout<<"Release 不要跳过我的BubbleSort哇" << endl;//必须要加入这句话，如果没有输出的话，我的bubble就不执行辣 (*T_T*) 
			break;
		}
	}

}

void BubbleSort_Bad(int* a, int n)
{
	for (int j = n - 1; j >= 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
	}
}

//void ShellSort(int* a, int n)
//{
//	int gap = n / 2;
//
//	for (int i = 0; i < n - gap; i += gap)
//	{
//		if (a[i] > a[i + gap])
//		{
//			swap(a[i], a[i + gap]);
//		}
//	}
//}

void Qsort(int* a, int begin, int end)
{
	//停止条件
	if (begin >= end ) 
	{
		return;
	}
	int left = begin, right = end - 1;

	int key = a[left];
	while (left < right)
	{
		//右边找小，不是的话移动,是的话不移动，并且跳出循环
		while (left < right && a[right] >= key)
		{
			right--;
		}
		//左边找大，不是的话移动，是的话不移动，并且跳出循环
		while (left < right && a[left] <= key)
		{
			left++;
		}

		swap(a[left], a[right]);
	}

	swap(a[begin], a[right]);
	//递归调用部分
	Qsort(a, begin, right);
	Qsort(a, right + 1, end);
}