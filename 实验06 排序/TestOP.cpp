#include "TestOP.h"
#define SIZE 20 //�����������ĳ���

void TestOP()
{
	srand(time(0));
	const int N = 200000;
	cout << "��ȫ�������������Ϊ��" << N << endl;
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

	// ��a1������ת��Ϊa4����ʽ�ṹ
	SListNode* a4 = ArrayToLinkedList(a1, N);

	cout << "�����ʱ�����ܲ��ԣ����Ժ�ߵĵ�λΪ����" << endl;

	//����ʱ�������
	//ԭ����������ǰ����һ��ʱ������������к�Ҳ����һ��ʱ���������֮������ʱ�������ͻ�õ������ĵ�ʱ��
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

	// �ͷ��ڴ棬��ֹ�ڴ�й©��һ����ϰ�ߣ�
	free(a1);
	free(a2);
	free(a3);
	FreeLinkedList(a4);
	free(a5);
	free(a6);
}

// �����ɽӽ���������飬��Ҫ��Ϊ�˲���ð�������Ż�ǰ����ڽϴ�������ʱ���ֵ��֮����������20���ӽ����������
void generate_nearly_sorted_array(int arr[], int size, double disorder_factor) {
	// ��ʼ������Ϊ��ȫ����
	for (int i = 0; i < size; ++i) {
		arr[i] = i;
	}

	// ������Ҫ�����Ĵ���
	int num_swaps = (int)(size * disorder_factor);

	// �������Ԫ��
	for (int i = 0; i < num_swaps; ++i) {
		int idx1 = rand() % size;
		int idx2 = rand() % size;

		// ����Ԫ��
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}

// ��һ�����鸴�Ƶ���һ�����飬����������ܻ��Ǳ�ȡ���ˣ���Ϊ���ƻ��ǱȽϼ򵥵ģ����ǰɣ�ɾ��Ҳû��ʲô��Ҫ�����Ű�
void copy_array(int source[], int destination[], int size) {
	for (int i = 0; i < size; ++i) {
		destination[i] = source[i];
	}
}

// ����Ǵ�ͷ���֣���������Ĺ��ܾ��ǲ��Խӽ������20�������õ�
void TestOrder()
{
	double disorder_factor = 0.1;  // ���������̶ȣ�10%��Ԫ�ؿ��ܱ����ң�

	// ����һ������
	int arr[SIZE];

	// ��ʼ�����������
	srand(time(NULL));

	// ���ɽ������������
	generate_nearly_sorted_array(arr, SIZE, disorder_factor);

	cout << "20���ѻ�������������Ĳ���" << endl;
	cout << "���ԵĶ��������Ϊ��" << endl;
	//��C++11�У�������һ�����Խ������ڷ�Χ��forѭ�������Ժ����ȥ��ӡ����
	for (auto x : arr)
	{
		cout << x << " ";
	}

	cout << endl;
	cout << endl;

	//��������
	int arr1[SIZE];
	int arr2[SIZE];
	int arr3[SIZE];
	int arr4[SIZE];
	int arr5[SIZE];
	int arr6[SIZE];
	// �������飬�����֮ǰ�������֮��Ĳ��֣��о�������������΢ֱ��һ��
	for (int i = 0; i < SIZE; ++i)
	{
		arr1[i] = arr[i];
		arr2[i] = arr[i];
		arr3[i] = arr[i];
		arr4[i] = arr[i];
		arr6[i] = arr[i];
	}

	// ��a1������ת��Ϊa4����ʽ�ṹ
	SListNode* arr7 = ArrayToLinkedList(arr, SIZE);

	// ���Բ���
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
	// �����ǲ����ø��跶Χ��forѭ���ģ������ִ���һ����ӡ�ĺ���
	while (arr7 != nullptr)
	{
		cout << arr7->data << " ";
		arr7 = arr7->next;
	}
	cout << endl;
}

//����������ǲ�������ģ����ϱ߲�࣬����ϸ������
void TestReOrder()
{
	// ����һ������
	int arr[SIZE] = { 19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "20������������Ĳ���" << endl;
	cout << "���ԵĶ��������Ϊ��" << endl;

	for (auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << endl;

	//��������
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

	// ��a1������ת��Ϊa4����ʽ�ṹ
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

// �������һ��Ϊ��ʵ����Ͻ��Ե�һ���������Ϊ�˰�˳��ṹת��Ϊ��ʽ�ṹ�Ĵ��룬����ֵ����SListNode* Ҳ��������Ľṹ�壬�ܼ�Ҳ���Ǻ���Ҫ������ϸ������
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

// ��������ͷ���ռ�ռ�ĺ������ܼ�Ҳ���Ǻ���Ҫ������ϸ������
void FreeLinkedList(SListNode* head) {
	while (head) {
		SListNode* temp = head;
		head = head->next;
		delete temp;
	}
}