#pragma once
#include<iostream>
#include<cassert>

// ��ʽ�ṹ�����ڲ�����������
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SListNode;


using namespace std;



//���򲿷�
//ð�������Ż���
void BubbleSort(int* a, int n);
//ð�������Ż�ǰ��
void BubbleSort_Bad(int* a, int n);
// �������򡪡���������
void Qsort(int* a, int begin, int end);
//	ѡ������
void SelectSort(int* a, int n);
// ������������
void InsertSort_Link(SListNode*& A);
// �������� ��������
void InsertSort(int* a, int n);
// ϣ������
void ShellSort(int* a, int n);

// �������Ľ��
void CheckSort();
//��������Ԫ��
void swap(int& i, int& j);
