#include "TestOP.h"
#define SIZE 100000 //�����������ĳ���

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


	free(a1);
	free(a2);
	free(a3);
	FreeLinkedList(a4);
	free(a5);
	free(a6);

}

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

void copy_array(int source[], int destination[], int size) {
	for (int i = 0; i < size; ++i) {
		destination[i] = source[i];
	}
}

void Testorder()
{
	double disorder_factor = 1;  // ���������̶ȣ�20%��Ԫ�ؿ��ܱ����ң�

	// ����һ������
	int arr[SIZE];

	// ��ʼ�����������
	srand(time(NULL));

	// ���ɽ������������
	generate_nearly_sorted_array(arr, SIZE, disorder_factor);

	int arr2[SIZE];
	copy_array(arr, arr2, SIZE);

	cout << "�����������������Ϊ��" << SIZE << endl;

	//int begin2 = clock();
	////cout << "begin2 = " << begin2 << endl;
	//BubbleSort(arr2, SIZE);
	//int end2 = clock();
	////cout << "end2 = " << end2 << endl;

	//
	//cout << "BubbleSort��" << end2 - begin2 << endl;

	int begin1 = clock();
	Qsort(arr, 0, SIZE);
	int end1 = clock();

	cout << "Qsort:" << end1 - begin1 << endl;
}

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

void FreeLinkedList(SListNode* head) {
	while (head) {
		SListNode* temp = head;
		head = head->next;
		delete temp;
	}
}