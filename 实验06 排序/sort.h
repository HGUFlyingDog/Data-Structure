#pragma once
#include<iostream>
#include<cassert>

// 链式结构，用于插入排序排序
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SListNode;


using namespace std;

void swap(int& i, int& j);

void BubbleSort(int* a, int n);
void BubbleSort_Bad(int* a, int n);
void Qsort(int* a, int begin, int end);
void SelectSort(int* a, int n);
void InsertSort(SListNode** A);


void CheckSort();
//void ShellSort(int* a, int n);
