#include"sort.h"

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void CheckSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] >= a[i + 1])
		{
			cout << "����δ���" << endl;
		}
	}
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
//debug ��¼
//��д���ˣ��ظ��Ļ��Ҳ�׼i��j ��λ��
