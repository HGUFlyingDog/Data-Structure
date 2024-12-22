#include "TestOP.h"
#define SIZE 20 //近似随机数组的长度

void TestOP()
{
	srand(time(0));
	const int N = 200000;
	cout << "完全无序测试数据量为：" << N << endl;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}

	// 把a1的数组转换为a4的链式结构
	SListNode* a4 = ArrayToLinkedList(a1, N);

	cout << "这个是时间性能测试，测试后边的单位为毫秒" << endl;

	//计算时间的消耗
	//原理：函数运行前会有一个时间戳，函数运行后也会有一个时间戳，结束之后两个时间戳相减就会得到所消耗的时间
	int begin1 = clock();
	BubbleSort(a1, N);
	int end1 = clock();
	cout << "BubbleSort:" << end1 - begin1 << endl;

	int begin2 = clock();
	Qsort(a2, 0, N);
	int end2 = clock();
	cout << "Qsort:" << end2 - begin2 << endl;

	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();
	cout << "SelectSort:" << end3 - begin3 << endl;

	int begin6 = clock();
	InsertSort(a6, N);
	int end6 = clock();
	cout << "InsertSort:" << end6 - begin6 << endl;

	int begin4 = clock();
	InsertSort_Link(a4);
	int end4 = clock();
	cout << "InsertSort_Link:" << end4 - begin4 << endl;

	int begin5 = clock();
	SelectSort(a5, N);
	int end5 = clock();
	cout << "SelectSort:" << end5 - begin5 << endl;

	// 释放内存，防止内存泄漏，一个好习惯！
	free(a1);
	free(a2);
	free(a3);
	FreeLinkedList(a4);
	free(a5);
	free(a6);
}

// 让生成接近有序的数组，主要是为了测试冒泡排序优化前后对于较大的数组的时间差值，之后用来测试20个接近有序的数组
void generate_nearly_sorted_array(int arr[], int size, double disorder_factor) {
	// 初始化数组为完全有序
	for (int i = 0; i < size; ++i) {
		arr[i] = i;
	}

	// 计算需要交换的次数
	int num_swaps = (int)(size * disorder_factor);

	// 随机交换元素
	for (int i = 0; i < num_swaps; ++i) {
		int idx1 = rand() % size;
		int idx2 = rand() % size;

		// 交换元素
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

// 从一个数组复制到另一个数组，但是这个功能还是被取代了，因为复制还是比较简单的，但是吧，删了也没有什么必要，留着吧
void copy_array(int source[], int destination[], int size) {
	for (int i = 0; i < size; ++i) {
		destination[i] = source[i];
	}
}

// 这个是大头部分，这个函数的功能就是测试接近有序的20个整数用的
void TestOrder()
{
	double disorder_factor = 0.1;  // 数组的无序程度（10%的元素可能被打乱）

	// 创建一个数组
	int arr[SIZE];

	// 初始化随机数种子
	srand(time(NULL));

	// 生成近似有序的数组
	generate_nearly_sorted_array(arr, SIZE, disorder_factor);

	cout << "20个已基本有序的整数的测试" << endl;
	cout << "测试的对象的内容为：" << endl;
	//在C++11中，增加了一个特性叫做基于范围的for循环，可以好玩的去打印数组
	for (auto x : arr)
	{
		cout << x << " ";
	}

	cout << endl;
	cout << endl;

	//创建数组
	int arr1[SIZE];
	int arr2[SIZE];
	int arr3[SIZE];
	int arr4[SIZE];
	int arr5[SIZE];
	int arr6[SIZE];
	// 复制数组，这就是之前被替代的之后的部分，感觉看起来还是稍微直观一点
	for (int i = 0; i < SIZE; ++i)
	{
		arr1[i] = arr[i];
		arr2[i] = arr[i];
		arr3[i] = arr[i];
		arr4[i] = arr[i];
		arr6[i] = arr[i];
	}

	// 把a1的数组转换为a4的链式结构
	SListNode* arr7 = ArrayToLinkedList(arr, SIZE);

	// 测试部分
	BubbleSort(arr1, SIZE);
	for (auto x : arr1)
	{
		cout << x << " ";
	}
	cout << endl;

	ShellSort(arr2, SIZE);
	for (auto x : arr2)
	{
		cout << x << " ";
	}
	cout << endl;

	Qsort(arr3, 0, SIZE);
	for (auto x : arr3)
	{
		cout << x << " ";
	}
	cout << endl;

	SelectSort(arr4, SIZE);
	for (auto x : arr4)
	{
		cout << x << " ";
	}
	cout << endl;

	InsertSort(arr6, SIZE);
	for (auto x : arr6)
	{
		cout << x << " ";
	}
	cout << endl;

	InsertSort_Link(arr7);
	// 链表是不能用给予范围的for循环的，所以手搓了一个打印的函数
	while (arr7 != nullptr)
	{
		cout << arr7->data << " ";
		arr7 = arr7->next;
	}
	cout << endl;
}

//这个函数就是测试逆序的，和上边差不多，不详细解释了
void TestReOrder()
{
	// 创建一个数组
	int arr[SIZE] = { 19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "20个逆序的整数的测试" << endl;
	cout << "测试的对象的内容为：" << endl;

	for (auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << endl;

	//创建数组
	int arr1[SIZE];
	int arr2[SIZE];
	int arr3[SIZE];
	int arr4[SIZE];
	int arr5[SIZE];
	int arr6[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		arr1[i] = arr[i];
		arr2[i] = arr[i];
		arr3[i] = arr[i];
		arr4[i] = arr[i];
		arr6[i] = arr[i];
	}

	// 把a1的数组转换为a4的链式结构
	SListNode* arr7 = ArrayToLinkedList(arr, SIZE);

	BubbleSort(arr1, SIZE);
	for (auto x : arr1)
	{
		cout << x << " ";
	}
	cout << endl;

	ShellSort(arr2, SIZE);
	for (auto x : arr2)
	{
		cout << x << " ";
	}
	cout << endl;

	Qsort(arr3, 0, SIZE);
	for (auto x : arr3)
	{
		cout << x << " ";
	}
	cout << endl;

	SelectSort(arr4, SIZE);
	for (auto x : arr4)
	{
		cout << x << " ";
	}
	cout << endl;

	InsertSort(arr6, SIZE);
	for (auto x : arr6)
	{
		cout << x << " ";
	}
	cout << endl;

	InsertSort_Link(arr7);
	while (arr7 != nullptr)
	{
		cout << arr7->data << " ";
		arr7 = arr7->next;
	}
	cout << endl << endl << endl << endl << endl;
}

// 这个就是一个为了实验的严谨性的一个产物，就是为了把顺序结构转换为链式结构的代码，返回值就是SListNode* 也就是链表的结构体，很简单也不是很重要，不详细解释了
SListNode* ArrayToLinkedList(const int* arr, int size) {
	if (size == 0) return nullptr;

	SListNode* head = new SListNode{ arr[0], nullptr };
	SListNode* current = head;

	for (int i = 1; i < size; ++i) {
		current->next = new SListNode{ arr[i], nullptr };
		current = current->next;
	}

	return head;
}

// 这个就是释放所占空间的函数，很简单也不是很重要，不详细解释了
void FreeLinkedList(SListNode* head) {
	while (head) {
		SListNode* temp = head;
		head = head->next;
		delete temp;
	}
}