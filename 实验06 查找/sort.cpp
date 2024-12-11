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
	//ֹͣ����
	if (begin >= end ) 
	{
		return;
	}
	int left = begin, right = end - 1;

	int key = a[left];
	while (left < right)
	{
		//�ұ���С�����ǵĻ��ƶ�,�ǵĻ����ƶ�����������ѭ��
		while (left < right && a[right] >= key)
		{
			right--;
		}
		//����Ҵ󣬲��ǵĻ��ƶ����ǵĻ����ƶ�����������ѭ��
		while (left < right && a[left] <= key)
		{
			left++;
		}

		swap(a[left], a[right]);
	}

	swap(a[begin], a[right]);
	//�ݹ���ò���
	Qsort(a, begin, right);
	Qsort(a, right + 1, end);
}