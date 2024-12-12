#include "TestOP.h"
#define SIZE 100000 //�����������ĳ���

void TestOP()
{
	srand(time(0));
	const int N = 100000;
	cout << "��ȫ�������������Ϊ��" << N << endl;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];
	}

	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	//ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	//HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	//QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//BubbleSort(a6, N);
	int end6 = clock();

	int begin7 = clock();
	Qsort(a7,0,N);
	int end7 = clock();
	

	//cout << "InsertSort:" << end1 - begin1 << endl;
	//cout << "ShellSort:" << end2 - begin2 << endl;
	//cout << "SelectSort:" << end3 - begin3 << endl;
	//cout << "HeapSort:" << end4 - begin4 << endl;

	//cout << "BubbleSort:" << end6 - begin6 << endl;
	cout << "Qsort:" << end7 - begin7 << endl;

	//cout << "QuickSort:" << end5 - begin5 << endl;
	//cout << "MergeSort:" << end6 - begin6 << endl;

	free(a1);
	free(a2);
	free(a3);
	free(a4);
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
	copy_array(arr, arr2, SIZE );

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

