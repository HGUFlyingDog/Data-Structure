#include"sort.h"

//插入排序
void InsertSort_Link(SListNode*& A)
{
	if (A == nullptr || A->next == nullptr) return; // 链表为空或只有一个节点时直接返回

	SListNode* head = A; // 记录链表头

	while (A != nullptr && A->next != nullptr) // 确保 A 和 A->next 存在
	{
		if (A->next->data < A->data) // 找到了
		{
			SListNode* temp = A->next; // 保存下一个节点
			A->next = A->next->next;  // 从原链表中移除 temp

			// 插入 temp 到正确的位置
			if (temp->data < head->data) // 插入到链表头部
			{
				temp->next = head;
				head = temp;
				continue;
			}

			SListNode* cur = head;
			while (cur->next != nullptr) // 找到插入位置
			{
				if (temp->data < cur->next->data)
				{
					temp->next = cur->next;
					cur->next = temp;
					break; // 插入完成后退出循环
				}
				cur = cur->next;
			}
		}
		else
		{
			A = A->next; // 只有无需插入时，才移动到下一个节点
		}
	}

	A = head; // 更新链表头
}


// 选择排序
void SelectSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)//循环扩大
	{
		int small = i;
		for (int j = i; j < n; j++)//选择最小的
		{
			if (a[j] < a[small])
			{
				small = j;
			}
		}
		swap(a[i], a[small]);
	}
}

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void CheckSort()
{
	srand(time(0));
	const int N = 100;
	cout << "完全无序测试数据量为：" << N << endl;
	int* a1 = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
	}
	SelectSort(a1, N);

	for (int i = 0; i < N - 1; i++)
	{
		assert(a1[i] <= a1[i + 1]);
	}
	cout << "经过超级严谨的测试，这个排序没问题！！" << endl;
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
			cout << "Release 不要跳过我的BubbleSort哇" << endl;//必须要加入这句话，如果没有输出的话，我的bubble就不执行辣 (*T_T*) 
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
	if (begin >= end)
	{
		return;
	}

	int left = begin, right = end - 1;
	//随机选择key
	int randi = left + (rand() % (right - left + 1));
	swap(a[left], a[randi]);

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

