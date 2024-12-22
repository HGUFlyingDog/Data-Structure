#include"sort.h"

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
		swap(a[i], a[small]);// 把最小的和开头的交换
	}
}

//交换两个元素
void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

// 检查排序的正确性
void CheckSort()
{
	srand(time(0)); // 设置随机数种子，基于当前时间生成不同的随机数序列
	const int N = 100; // 定义数据量大小为100
	cout << "完全无序测试数据量为：" << N << endl; // 输出数据量大小

	// 动态分配一个包含N个整数的数组a1
	int* a1 = (int*)malloc(sizeof(int) * N);

	// 随机生成N个整数并存入数组a1
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand(); // 将随机数赋值给a1[i]
	}

	// 使用选择排序对数组a1进行排序
	SelectSort(a1, N);

	// 遍历数组，检查排序后的结果是否满足升序
	for (int i = 0; i < N - 1; i++)
	{
		// 如果a1[i] > a1[i+1]，说明排序失败，程序将会终止
		assert(a1[i] <= a1[i + 1]);
	}

	// 如果没有触发assert异常，说明排序正确
	cout << "经过超级严谨的测试，这个排序没问题！！" << endl;
}

// 冒泡排序实现
void BubbleSort(int* a, int n)
{
	// 外层循环控制排序的次数，n-1 次即可保证所有元素都排好序
	for (int j = n - 1; j >= 0; j--)
	{
		int flag = 0; // 用于检查这一轮排序是否发生了交换，默认没有发生交换

		// 内层循环进行相邻元素的比较和交换，逐步将最大/最小元素"冒泡"到数组末端
		for (int i = 0; i < j; i++)
		{
			// 比较相邻元素，如果前一个元素比后一个元素大，则交换
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]); // 交换两个元素的位置
				flag = 1; // 标记已经发生过交换
			}
		}

		// 如果这一轮没有交换任何元素，说明数组已经是有序的，可以提前结束排序
		if (flag == 0)
		{
			cout << "Release 不要跳过我的BubbleSort哇" << endl; //必须要加入这句话，如果没有输出的话，我的bubble就不执行辣 (*T_T*) 

			break; // 提前结束排序
		}
	}
}

// 冒泡排序（错误实现版本）
void BubbleSort_Bad(int* a, int n)
{
	// 外层循环，逐步减少排序范围
	for (int j = n - 1; j >= 0; j--)
	{
		// 内层循环，进行相邻元素的比较与交换
		for (int i = 0; i < j; i++)
		{
			// 如果当前元素大于下一个元素，则交换
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
	}
}

// 希尔排序（Shell Sort）实现
void ShellSort(int* a, int n)
{
	int gap = n;  // 初始化间隔 gap 为数组长度 n
	while (gap > 1)  // 继续进行排序直到 gap 降到 1
	{
		gap /= 2;  // 每次将 gap 降为原来的一半

		// 对于每个 gap 值，执行插入排序的变种
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;  // 记录当前元素的位置
			int tmp = a[i + gap];  // 临时保存当前元素（即待插入元素）

			// 在已排序的部分中插入 tmp，保证它能够按正确位置插入
			while (end >= 0)  // 在已经排好序的子数组中进行插入操作
			{
				// 如果当前元素比上一个元素小，则需要交换位置
				if (tmp < a[end])
				{
					a[end + gap] = a[end];  // 将元素向右移动
					end -= gap;  // 向左移动 gap 个位置
				}
				else
				{
					break;  // 如果 tmp >= a[end]，则跳出循环，插入完成
				}
			}
			a[end + gap] = tmp;  // 将待插入的元素放入合适位置
		}
	}
}

// 快速排序实现
void Qsort(int* a, int begin, int end)
{
	// 递归的停止条件：当 begin >= end 时，表示已完成排序
	if (begin >= end)
	{
		return;  // 无需排序，直接返回
	}

	// 设置左指针和右指针
	int left = begin, right = end - 1;

	// 随机选择一个 key（基准元素），这里选择了当前区间的左端点作为基准
	int randi = left + (rand() % (right - left + 1));  // 随机产生一个 [left, right] 范围内的索引
	swap(a[left], a[randi]);  // 将基准元素交换到区间的起始位置

	int key = a[left];  // key 为当前选定的基准元素

	// 在区间 [begin, end) 内进行一轮划分
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

	// 将基准元素放到正确的位置（即，a[right]），左边的元素都比它小，右边的元素都比它大
	swap(a[begin], a[right]);

	// 递归排序基准左边的部分
	Qsort(a, begin, right);

	// 递归排序基准右边的部分
	Qsort(a, right + 1, end);
}

// 链表版本插入排序
void InsertSort_Link(SListNode*& A)
{
	// 如果链表为空或者只有一个节点，不需要排序，直接返回
	if (A == nullptr || A->next == nullptr) return;

	SListNode* head = A; // 记录链表的头节点

	// 遍历链表，进行插入排序
	while (A != nullptr && A->next != nullptr) // 确保 A 和 A->next 存在
	{
		// 如果下一个节点的值小于当前节点的值，说明找到了需要插入的节点
		if (A->next->data < A->data)
		{
			SListNode* temp = A->next;    // 记录待插入的节点
			A->next = A->next->next;      // 从链表中删除待插入的节点

			// 将 temp 插入到链表中的正确位置
			// 如果插入节点的值小于当前头节点的值，直接插入到头部
			if (temp->data < head->data)
			{
				temp->next = head;  // 将 temp 插入到头部
				head = temp;        // 更新链表头为 temp
				continue;           // 跳过当前循环，继续处理下一个节点
			}

			// 否则，从头节点开始遍历链表，找到合适的位置插入
			SListNode* cur = head;
			while (cur->next != nullptr) // 找到插入位置
			{
				if (temp->data < cur->next->data) // 找到插入位置
				{
					temp->next = cur->next; // 将 temp 插入到 cur 和 cur->next 之间
					cur->next = temp;
					break;  // 插入完成，退出循环
				}
				cur = cur->next; // 继续向后遍历
			}
		}
		else
		{
			// 如果当前节点不需要交换，继续向后遍历
			A = A->next;
		}
	}

	A = head; // 更新链表头
}

// 数组版本插入排序
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++) // 从第二个元素开始遍历
	{
		int end = i - 1;     // 当前待插入元素的左边部分已经是有序的
		int tmp = a[i];       // 保存当前待插入的元素

		// 将 tmp 插入到 [0, end] 区间中，保持有序
		while (end >= 0)
		{
			if (tmp < a[end])  // 如果 tmp 小于 a[end]，则将 a[end] 向右移动
			{
				a[end + 1] = a[end]; // 将 a[end] 向右移一位
				--end;              // 向左移动指针
			}
			else
			{
				break;  // 如果 tmp >= a[end]，则找到了插入位置，跳出循环
			}
		}

		// 这个循环结束以后，end 的位置就是要插入的位置的前一个
		a[end + 1] = tmp; // 将 tmp 放入正确的位置
	}
}